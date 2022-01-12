#include<iostream>
using namespace std;
int main(){
	int I, J, N;
	N = 1;
	for(I=1; I<=3; I++)
	{
		for(J=1; J<=5; J++)
		{
			cout<<"   "<<N;
			N = N + 1;
		}
		cout<<"\n"<<endl;
	}
}
