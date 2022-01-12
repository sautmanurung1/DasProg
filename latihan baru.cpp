#include<iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	
	if(N>50){
		N = N - 25;
	}
	else{
		N = N + 10;
	}
	cout<<N;
	return 0;
}
