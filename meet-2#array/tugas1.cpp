#include<iostream>
using namespace std;

int main ()
{
int A [5];
int jumlah;
int i;
 
	for (int i=0; i<=4; i++) {
		cout<<"Masukkan nilai ke "<<i+1<<" :";
		cin>>A[i];
	}
	
	jumlah = 0;
	for (int i=0; i<=4; i++) 
	{
		jumlah = jumlah+A[i];
	}
	cout<<"Total :"<<jumlah;
return 0;
}