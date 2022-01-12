#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a;
	cin>>b;
	c = ++a + b--;
	cout<<"Hasil = "<<c<<endl;
	cout<<"Nilai a Sekarang = "<<a<<endl;
	cout<<"Nilai b Sekarang = "<<b<<endl;
}
