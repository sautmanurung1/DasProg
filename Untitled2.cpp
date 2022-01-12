#include<iostream>
using namespace std;
int main(){
	int a=4,b=4,c;
	c = a++ + --b;
	cout<<"Hasil = "<<c<<endl;
	cout<<"Nilai a Sekarang = "<<a<<endl;
	cout<<"Nilai b Sekarang = "<<b<<endl;
}
