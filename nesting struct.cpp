#include <bits/stdc++.h>
using namespace std;

struct tokoh{
    string nama;
    int usia;
};

struct buku{
    string judul;
    int banyakHalaman;
    tokoh pemeran1;
    tokoh pemeran2;
};

int main(){
    tokoh tokoh1,tokoh2;
    tokoh1.nama = "Galih Mahotama";
    tokoh1.usia = 18;
    tokoh2.nama = "Chelsea Audriana";
    tokoh2.usia = 17;

    buku novel;
    novel.judul = "Anak Sekecil Itu";
    novel.banyakHalaman = 300;
    novel.pemeran1 = tokoh1;
    novel.pemeran2 = tokoh2;

    cout<<novel.pemeran1.nama<<endl;
    cout<<novel.pemeran2.usia<<endl;

}
