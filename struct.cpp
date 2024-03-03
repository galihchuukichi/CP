#include <bits/stdc++.h>
using namespace std;


// CONTOH STRUCT
struct sekolah{
    string provinsi;
    int banyakSiswa;
    int banyakGuru;
    bool isAktif;
};

int main(){
    sekolah smansa, spensa;
    smansa.provinsi = "Bali";
    smansa.banyakSiswa = 100;
    smansa.banyakGuru = 10;
    smansa.isAktif = true;

    spensa.provinsi = "Jawa";
    spensa.banyakGuru = 1;
    spensa.banyakSiswa = 1000;
    spensa.isAktif = false;

    cout<< "SPENSA" << endl;
    cout<<"- "<<spensa.provinsi<<endl;
    cout<<"- "<<spensa.banyakSiswa<<endl;
    cout<<"- "<<spensa.banyakGuru<<endl;
    cout<<"- "<<spensa.isAktif<<endl;

    cout<< "SMANSA" << endl;
    cout<<"- "<<smansa.provinsi<<endl;
    cout<<"- "<<smansa.banyakSiswa<<endl;
    cout<<"- "<<smansa.banyakGuru<<endl;
    cout<<"- "<<smansa.isAktif<<endl;







}
