/*
Nama	: Hafidh Akhdan Najib
Kelas 	: A
NPM		: 140810180061
Tanggal	: Selasa, 5 Maret 2019
*/

#include <iostream>
#include <string.h>

using namespace std;

struct Pegawai{
 string NIP;
 string nama;
 int golongan;
 int gaji;
};

Pegawai pgwai[20];

void banyakData(int &n){
	cout<<"Masukkan Jumlah Pegawai : "; cin>>n;
}

void inputPegawai(Pegawai pgwai[],int &n){
 for (int i=0;i<n;i++){
        cout << "Masukkan data pegawai " << i+1 << endl;
        cout << "NIP        : "; cin >> pgwai[i].NIP;
        cout << "Nama       : "; cin.ignore(); getline(cin,pgwai[i].nama);
        cout << "Golongan   : "; cin >> pgwai[i].golongan;
        cout << endl;
    }
}

void sortingGol(Pegawai pgwai[], int &n){
 int i;
 Pegawai temp;
 for(i=1; i<n; i++){
        temp = pgwai[i];
        while(i>0 && pgwai[i-1].golongan>temp.golongan){
            pgwai[i]= pgwai[i-1];
            i = i-1;
        }
        pgwai[i]= temp;
    }
}

void sortingNIP(Pegawai pgwai[], int &n){
 int i;
 Pegawai temp;
 for(i=1; i<n; i++){
        temp = pgwai[i];
        while(i>0 && pgwai[i-1].NIP>temp.NIP){
            pgwai[i] = pgwai[i-1];
            i = i-1;
        }
        pgwai[i]= temp;
    }

}

void cariGaji (Pegawai pgwai[], int &n){
 for (int i=0; i<n; i++){
  if (pgwai[i].golongan == 1){
   pgwai[i].gaji=2000000;
  }
  else if (pgwai[i].golongan == 2){
   pgwai[i].gaji=3000000;
  }
  else if (pgwai[i].golongan == 3){
   pgwai[i].gaji=5000000;
  }
  else if (pgwai [i].golongan == 4){
   pgwai[i].gaji=8000000;
  }
 }
}

int rataRata (Pegawai pgwai [], int &n, int& rataGaji){
 int gajiTotal=0;
 for (int i=0 ; i<n ; i++){
  gajiTotal= gajiTotal+pgwai[i].gaji;
 }
 rataGaji=gajiTotal/n;
 return(rataGaji);
}

void cetakDaftar (Pegawai pgwai[], int n, int rataGaji){
    sortingNIP(pgwai, n);
    cariGaji(pgwai, n);
    for (int i=0; i<n;i++){
   cout << "NIP    : " << pgwai[i].NIP << endl;
   cout << "Nama   : " << pgwai[i].nama << endl;
   cout << "Gaji   : " << pgwai[i].gaji << endl;
   cout << endl;
  }
    rataRata(pgwai, n, rataGaji);
    cout << "Rata-rata Gaji Pegawai : " << rataGaji << endl;
    sortingGol(pgwai, n);
    cout<<"Pegawai dengan gaji tertinggi : "<<pgwai[n-1].nama<<endl;
    cout<<"Pegawai dengan gaji terendah : "<<pgwai[0].nama<<endl;
}

int main(){
 int n, rataGaji;
 banyakData(n);
 inputPegawai(pgwai,n);
 system("cls");
 cout << "DAFTAR PEGAWAI\n";
    cetakDaftar(pgwai, n, rataGaji);
}
