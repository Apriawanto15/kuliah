#include <iostream>
#include <string.h>
using namespace std;

struct matkul{
    string kd_matkul;
    string nm_matkul;
}; matkul matkul;


void kd_matkul(string kd){
	string *Senjaselaluindah = &kd; 
    cout<<"Kode dari matkul tersebut adalah : "<<kd<<endl;
    cout<<"Alamat memori dari kode matkul adalah : "<<&kd<<endl;
    cout<<"Pointer dari alamat memori kode matkul tersebut adalah : "<<*Senjaselaluindah<<endl;
}
void nm_matkul(string nm){
	
	string *Senjaselaluindah = &nm;
	cout<<"Nama dari matkul tersebut adalah : "<<nm<<endl;
    cout<<"Alamat memori dari Nama matkul adalah : "<<&nm<<endl;
    cout<<"Pointer dari alamat memori Nama matkul tersebut adalah : "<<*Senjaselaluindah<<endl;
}
int main(){

    cout<<"Masukan Kode Mata kuliah : ";
    cin>>matkul.kd_matkul; 
    cout<<"Masukan Nama Mata kuliah : ";
    cin>>matkul.nm_matkul;
    kd_matkul(matkul.kd_matkul);
    nm_matkul(matkul.nm_matkul);
}