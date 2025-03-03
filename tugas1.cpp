#include <iostream>
#include <string>
using namespace std;

struct Lagu {
    string judul;
    string penyanyi;
    string genre;
    int tahun;
};

const int MAX_LAGU = 100;
Lagu daftarLagu[MAX_LAGU];
int jumlahLagu = 0;

void bubbleSort() {
    for (int i = 0; i < jumlahLagu - 1; i++) {
        for (int j = 0; j < jumlahLagu - i - 1; j++) {
            if (daftarLagu[j].judul > daftarLagu[j + 1].judul) {
                swap(daftarLagu[j], daftarLagu[j + 1]);
            }
        }
    }
}

int binarySearch(string judulCari) {
    int kiri = 0, kanan = jumlahLagu - 1;
    while (kiri <= kanan) {
        int tengah = (kiri + kanan) / 2;
        if (daftarLagu[tengah].judul == judulCari) {
            return tengah;
        } else if (daftarLagu[tengah].judul < judulCari) {
            kiri = tengah + 1;
        } else {
            kanan = tengah - 1;
        }
    }
    return -1;
}

int main() {
    int pilihan;
    bool kembaliMenu = true;
    
    while (kembaliMenu) {
        cout << "\nMenu Utama" << endl;
        cout << "1. Tambah Lagu" << endl;
        cout << "2. Lihat Daftar Lagu" << endl;
        cout << "3. Cari Lagu" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore();

        if (pilihan == 1) {
            int jumlahInput;
            cout << "Masukkan jumlah lagu yang ingin diinput: ";
            cin >> jumlahInput;
            cin.ignore();
            
            for (int i = 0; i < jumlahInput; i++) {
                if (jumlahLagu < MAX_LAGU) {
                    cout << endl;
                    cout << "Masukkan judul lagu: ";
                    getline(cin, daftarLagu[jumlahLagu].judul);
                    cout << "Masukkan penyanyi: ";
                    getline(cin, daftarLagu[jumlahLagu].penyanyi);
                    cout << "Masukkan genre lagu: ";
                    getline(cin, daftarLagu[jumlahLagu].genre);
                    cout << "Masukkan tahun lagu: ";
                    cin >> daftarLagu[jumlahLagu].tahun;
                    cin.ignore();
                    jumlahLagu++;
                    bubbleSort();
                    cout << "Lagu berhasil ditambahkan dan daftar diurutkan!" << endl;
                } else {
                    cout << "Daftar lagu penuh!" << endl;
                    break;
                }
            }
        }
        else if (pilihan == 2) {
            if (jumlahLagu > 0) {
                cout << "\nDaftar Lagu yang Telah Diurutkan:" << endl;
                for (int i = 0; i < jumlahLagu; i++) {
                    cout << daftarLagu[i].judul << " - " << daftarLagu[i].penyanyi << " - "
                         << daftarLagu[i].genre << " - " << daftarLagu[i].tahun << endl;
                }
            } else {
                cout << "Daftar lagu masih kosong." << endl;
            }
        }
        else if (pilihan == 3) {
            if (jumlahLagu > 0) {
                string judulCari;
                cout << "Masukkan judul lagu yang dicari: ";
                getline(cin, judulCari);
                int hasil = binarySearch(judulCari);
                if (hasil != -1) {
                    cout << "Lagu ditemukan: " << daftarLagu[hasil].judul << " - " << daftarLagu[hasil].penyanyi
                         << " - " << daftarLagu[hasil].genre << " - " << daftarLagu[hasil].tahun << endl;
                } else {
                    cout << "Lagu tidak ditemukan." << endl;
                }
            } else {
                cout << "Daftar lagu masih kosong." << endl;
            }
        }
        else if (pilihan == 4) {
            cout << "Program selesai." << endl;
            kembaliMenu = false;
        }
        else {
            cout << "Pilihan tidak valid, coba lagi." << endl;
        }

        if (pilihan != 4) {
            char kembali;
            cout << "Kembali ke menu utama? (y/n): ";
            cin >> kembali;
            cin.ignore();
            kembaliMenu = (kembali == 'y' || kembali == 'Y');
        }
    }
    
    return 0;
}
