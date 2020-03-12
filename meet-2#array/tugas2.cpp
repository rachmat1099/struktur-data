#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main()
{
    string judul[100];
    string penulis[100];
    string tahunterbit[100];
    string b;
    int n, baris;

    cout << "Data Buku" << endl << endl;

    cout << "Jumlah buku yang akan diinput : ";
    getline(cin, b);
    cout << "\nInputkan Data Dibawah ini" <<endl;
    istringstream(b)>>baris;

    for(n=0; n<baris; n++){
        cout <<""<<endl;
        cout<<"Buku ke- "<< n+1<<endl;
        cout<<"Judul buku : ";
        getline(cin,judul[n]);
        cout<<"Penulis : ";
        getline(cin,penulis[n]);
        cout<<"Tahun Terbit : ";
        getline(cin,tahunterbit[n]);
    }
    cout<< "\n\nTampilan Data Semua Buku\n";
    for(n=0; n<baris; n++){
        cout<<"\nBuku ke- "<<n+1;
        cout<<"\nJudul Buku : "<< judul[n];
        cout<<"\nPenulis : "<< judul[n];
        cout<<"\nTahun Terbit : "<< judul[n]<<endl;
    }
    cout<<endl;
    system("pause");
    return 0;

}
