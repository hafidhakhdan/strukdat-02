/*
Nama	: Hafidh Akhdan Najib
Kelas 	: A
NPM		: 140810180061
Tanggal	: Selasa, 5 Maret 2019
*/

#include <iostream>
#include <string.h>

using namespace std;

struct Orang {
	int umur;
	char nama [30];
	char jk;
	char goldar;
};

int main (){
	Orang orang;
	orang.umur = 10;
	strcpy(orang.nama,"Fahi");
	orang.jk='L';
	orang.goldar='O';
	
	cout<<orang.umur<<endl;
	cout<<orang.nama<<endl;
	cout<<orang.goldar<<endl;
	cout<<orang.jk<<endl;
}
