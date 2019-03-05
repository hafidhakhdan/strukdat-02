/*
Nama	: Hafidh Akhdan Najib
Kelas 	: A
NPM		: 140810180061
Tanggal	: Selasa, 5 Maret 2019
*/

#include <iostream>
#include <string.h>

using namespace std;

struct Theater {
	int room;
	char seat [3];
	char movieTitle [30];
};

int main (){
	Theater teater;
	teater.room = 7;
	strcpy(teater.seat,"J9");
	strcpy(teater.movieTitle,"Adit & Jarwo");	
	
	cout<<teater.room<<endl;
	cout<<teater.seat<<endl;
	cout<<teater.movieTitle<<endl;
}
