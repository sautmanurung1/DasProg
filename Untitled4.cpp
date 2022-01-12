#include<iostream>
using namespace std;
int main(){
	int jam,menit,detik;
	cin>>detik;
	jam = detik/3600;
	menit = (detik - (jam*3600))/60;
	detik = (detik - (jam*3600)) - menit*60;
	cout<<"Maka Waktunya adalah : "<<endl;
	cout<<"Jam : "<<jam<<endl;
	cout<<"Menit : "<<menit<<endl;
	cout<<"Detik : "<<detik<<endl;
}
