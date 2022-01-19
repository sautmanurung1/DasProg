#include<iostream>
using namespace std;
int main(){
	int N;
	cin>>N;
	if(N<50){
		N=N+50;
		if(N>75){
			N=N-20;
		}else{
			N=N+10;
		}
		cout<<N;
	}else{
		cout<<N;
	}
	return 0;
}
