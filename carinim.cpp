#include<iostream>
//coding by m.zanuar f.
//yt:https://youtube.com/@sinauenjoy
//mygit= https://github.com/Soezz?tab=repositories
using namespace std;

int main()
{
    //header
    cout << "##  Pencari Nama Mahasiswa Melalui NIM ##" << endl;
    cout << "=========================================" << endl;

    cout<< endl; 
//informasi data array2d
string nimas[7][7]={{"111","dina"},
{"112","deri"},{"113","kuni"},
{"114","ari"},{"115","lina"},
{"116","aji"},{"117","doni"}
};

//operasi pencarian
string ids; 
cout << "Masukkan ID: ";
cin >> ids;//menyimpan data yang dicari

//operasi pencocokan data
int nemu=0; //melacak dan mencocokkan data yang dicari 
for(int i=0;i<7;i++){
  if(nimas[i][0]==ids){
  //ditemukan
  cout << "Nama ditemukan: " <<nimas[i][1]<< endl;
  nemu=1; //berubah karena data cocok sehingga 0 menjadi 1
  break;
  };
  };
  if(!nemu){
  //mengevaluasi suatu kondisi dan mengembalikan nilai true jika kondisi itu salah dan nilai false jika benar.
  //data tidak ditemukan 
  cout << "ID tidak ada di data" << endl;
  };
  return 0;
  };
