#include <iostream>
using namespace std;
void ganti(int *p) {
    *p=50;
    cout<<p;
}

int main(){
    /* int *p, *q, *r; //deklarasi pointer
    int n=10; //deklarasi variabel n
    p=&n; //p berisi alamat memori dari n
    *p=5; //nilai dari p diubah menjadi 5   
    cout<<*p<<endl; //menampilkan nilai dari p
    cout<<n<<endl; //menampilkan nilai dari n
    cout<<p<<endl; //menampilkan alamat memori
    cout<<&n; //menampilkan alamat memori  

    int a=20;
    int *i=&a;
    cout<<*i<<endl; */

    // int array[3]={10,20,30};
    // cout<<*(array+2)<<endl;

    /* int array[3]={10,20,30};
    int i;
    int *k;
    k=array;
    for (i=0;i<3;i++){
        cout<<*(k+i)<<" "<<endl;
    } */


    /* char kota[] ="Yogyakarta";
    cout<<kota<<endl;  
    char *j =kota;
    //cout<<*j<<endl;
    int i;
    for (i=0;i<10;i++){
        cout<<*(j+i)<<" ";
    } */

    /*int x=10;
    cout<<"Nilai x sebelum fungsi ganti: "<<x<<endl;
    ganti(&x);
    cout<<"Nilai x setelah fungsi ganti: "<<x<<endl;
    cout<<&x; */

    //Pointer ke Pointer
    /* int x=20;
    int *i=&x;
    int **ii=&i;
    cout<<**ii<<endl; */

    //LATIHAN
    /* int array[ ]={10,20,30,40,50};
    int *p; 
    p=array; 
    for (int i=0;i<5;i++){ 
        cout<<*(p+i)<<" "; 
    } 
    int max = *p; 
    for (int i = 1; i < 5; i++) {
        if (*(p + i) > max) { 
            max = *(p + i);
        }
    }
    int min = *p;
    for (int i = 1; i < 5; i++) {
        if (*(p + i) < min) {
            min = *(p + i);
        }
    }
   int jumlah = *p;
    for (int i = 1; i < 5; i++) {
        jumlah += *(p + i);
    }
    int rata = jumlah/5;
    cout << "\nNilai maksimum dari array adalah: " << max << endl;
    cout << "\nNilai minimum dari array adalah: " << min << endl;
    cout << "\nJumah nilai array : " << jumlah;
    cout << "\nRata-rata nilai array : " << jumlah/5; */


    int pecahan []= {10000, 20000, 50000}; 
    int i =0;
    int terbesar,terkecil; 
    for(i=0;i<3;i++){ 
        cout<<*(pecahan+i)<< " "; 
    }
    cout<<endl;
    terbesar = *pecahan; 
    terkecil = *pecahan; 
    for(i=0;i<3;i++){
        if (*(pecahan + i)>terbesar){
            terbesar=*(pecahan + i);
        }
        if(*(pecahan + i)<terkecil){
            terkecil = *(pecahan + i);
        }
    }
    cout<<endl;
    for(i=0;i<3;i++){
        cout<<*(pecahan+i)<< " ";
    }
    cout<<endl;
    cout<<"nilai terbesar :"<<terbesar<<endl;
    cout<<"nilai terkecil :"<<terkecil<<endl;
cout<<endl;
    int jumlah=0;
    for(i=0;i<3;i++){
        jumlah = jumlah + *(pecahan+i);
    }

    
    float rata = jumlah/3;
    cout<<"jumlah :"<<jumlah<<endl;
    cout<<"rata-rata :"<<rata;


    return 0;
}