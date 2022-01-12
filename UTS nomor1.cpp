#include<iostream>
using namespace std;
int main(){
	int nilai;
	cout<<"Masukkan nilai anda"<<endl;
	cin>>nilai;
	cout<<"Nilai anda adalah "<<nilai<<endl;
	if(nilai>85 && nilai<=100){
		cout<<"==================="<<endl;
		cout<<"Grade A"<<endl;
		cout<<"Sangat Baik - Lulus"<<endl;
		cout<<"==================="<<endl;
	} 
	else if(nilai>75 && nilai<=84){
		cout<<"==================="<<endl;
		cout<<"Grade B"<<endl;
		cout<<"Baik - Lulus"<<endl;
		cout<<"==================="<<endl;
	} 
	else if(nilai>60 && nilai<=74){
		cout<<"==================="<<endl;
		cout<<"Grade C"<<endl;
		cout<<"Cukup - Lulus"<<endl;
		cout<<"==================="<<endl;
	} 
	else if(nilai>40 && nilai<=59){
		cout<<"==================="<<endl;
		cout<<"Grade D"<<endl;
		cout<<"Kurang - Tidak Lulus"<<endl;
		cout<<"==================="<<endl;
	} else{
		cout<<"==========================="<<endl;
		cout<<"Grade E"<<endl;
		cout<<"Sangat Kurang - Tidak Lulus"<<endl;
		cout<<"==========================="<<endl;
	}
	return 0;
}
