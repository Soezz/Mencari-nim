#include<iostream>
//coding by m.zanuar f.
//mygit= https://github.com/Soezz?tab=repositories
using namespace std;

int main()
{
    //header
    cout << "##  Pencari Nama Mahasiswa Melalui NIM ##" << endl;
    cout << "=========================================" << endl;

    cout<< endl; 
    // info nimmahasiswa
    string nim_maha[30][30] = {
        {"221112015","M. Zanuar F."},
        {"221112024","A.Kholik"},
        {"221112028","Rizal"},
        {"221112021","A. Burhan S."},
        {"221112022","Addin S.P."},
        {"221112017","Kemal H."},
        {"221112014","A. Faruk Akbar"}
    };

    // Input NIM
    string NIM;
    cout << "Masukkan NIM: ";
    cin >> NIM;

    // pencarian nim
    int nemu = 0;
    for (int i = 0; i < 30; i++) {
        if (nim_maha[i][0] == NIM) {
            // NIM ditemukan
            cout << "Nama Mahasiswa: " << nim_maha[i][1] << endl;
            nemu=1;
            break;
            }
    }
    //bila tak ditemukan
    if(!nemu){
    cout << "NIM tidak ditemukan " << endl;
    }
    return 0;
}