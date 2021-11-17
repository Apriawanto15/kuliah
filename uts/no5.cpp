#include <iostream>

using namespace std;

int main(){
	
	int no1,no2,perkalian,tambah,kurang,bagi;
	cout<<"Menghitung jumlah, perkalian, pengurangan, dan pembagian \n";
	cout<<"Masukkan no1 pertama : ";
	cin >> no1;
	cout<<"Masukkan no2 kedua : ";
	cin >> no2;
	
	perkalian = no1 * no2;

    cout <<"Perkalian dari " <<no1 << " dan " << no2 <<" : " << perkalian;
    cout<<"\n";
	
	tambah = no1 + no2;

    cout <<"Penjumlahan dari " <<no1 << " dan " << no2 <<" : " << tambah;
    cout<<"\n";
    
    kurang = no1 - no2;

    cout <<"Pengurangan dari " <<no1 << " dan " << no2 <<" : " << kurang;
    cout<<"\n";
    
    bagi = no1 / no2;

    cout <<"Pembagian dari " <<no1 << " dan " << no2 <<" : " << bagi;
    cout<<"\n";
	
}