// BASIC CLASS

#include <bits/stdc++.h>
using namespace std;

class Mahasiswa{
    public:
        string nama;
        string cryptoAset;
        double banyakAset;
};

int main(){
    Mahasiswa data1, data2;
    data1.nama = "Galih";
    data1.cryptoAset = "ONDO";
    data1.banyakAset = 40.1;

    data2.nama = "Bintang";
    data2.cryptoAset = "MAVIA";
    data2.banyakAset = 10.0;
    
    cout << data1.nama << endl;
    cout << data1.cryptoAset << endl;
    cout << data1.banyakAset << endl;
    
    
    cout << data2.nama << endl;
    cout << data2.cryptoAset << endl;
    cout << data2.banyakAset << endl;


    return 0;
}



// USING CONSTRUCTOR
#include <bits/stdc++.h>
using namespace std;

class Aset{
    public:
        string jenis; // properti, saham, crypto
        string namaAset;
        double amountInUSD;
        
        // constructor dengan parameter
        Aset(string inputJenis, string inputNama, double inputAmountInUSD){
            Aset::jenis = inputJenis;
            Aset::namaAset = inputNama;
            Aset::amountInUSD = inputAmountInUSD;
        }

};


int main(){
    Aset galih = Aset("crypto","ONDO",25.0);
    cout<<galih.jenis<<endl;
    cout<<galih.namaAset<<endl;
    cout<<galih.amountInUSD<<endl;
    
    Aset huehue = Aset("property","KOST",1000.0);
    cout<<huehue.jenis<<endl;
    cout<<huehue.namaAset<<endl;
    cout<<huehue.amountInUSD<<endl;


    cout<<"PROGRAM KELAR"<<endl;

}
