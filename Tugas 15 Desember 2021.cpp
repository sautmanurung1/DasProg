#include<iostream>
using namespace std;
int main(){
	int sisi1,sisi2,sisi3;
	cin>>sisi1;
	cin>>sisi2;
	cin>>sisi3;
	
	if(sisi1==sisi2){
		cout<<"Sama sisi";
	}
	else if(sisi2==sisi3){
		cout<<"Sama kaki";
	}else{
		cout<<"Sembarang";
	}
}
