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
//informasi data array 2d
string nimas[9][9]={{"111","dina"},
 {"112","deri"},{"113","ari"},{"114", "gadis"}, {"115","aji"},{"116", "adi"},{"117","bima"},{"118", "kuni"},{"119","Lina"}
};

    // Input ids 
    string ids; //menunjukkan string bernama ids
    cout << "Masukkan id: ";
    cin >> ids; //menyimpan data yang diinputkan 

    // pencarian nim
    int nemu = 0; //digunakan untuk menyimpan dan melacak yg dicari
    for (int i = 0; i < 9; i++) {
        if (nimas[i][0] == ids) {
            // id ditemukan
            cout << "Nama Mahasiswa: " << nimas[i][1] << endl;
            nemu=1; //0 berubah 1 karena data cocok dengan yang dicari
            break;
            }
    }
    //bila tak ditemukan
    //(!)mengevaluasi suatu kondisi dan mengembalikan nilai true jika kondisi itu salah dan nilai false jika benar. 
    if(!nemu){
    cout << "NIM tidak ditemukan " << endl;
    }
    return 0;
}
