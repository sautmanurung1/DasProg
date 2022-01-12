#include <iostream>
using namespace std;
main()
{
	int pilihan,harga,banyak,bayar,total,Kembalian;
	cout<<"Menu Kantin Bu Novris"<<endl;
	cout<<"1. Gorengan Tempe = Rp.1000"<<endl;
	cout<<"2. Gorengan Tahu = Rp.1000"<<endl;
	cout<<"3. Gorengan Bakwan = Rp.1500"<<endl;
	cout<<"4. Gorengan Pisang = Rp.1500"<<endl;
	cout<<"5. Gorengan Sukun = Rp.2000"<<endl;
	cout<<"Masukkan pilihan menu ";cin>>pilihan;
	if(pilihan==1){
		harga = 1000;
		cout<<"Pesan berapa banyak gorengan tempe : ";cin>>banyak;
		total = harga * banyak;
		cout<<"Anda harus membayar sebesar : "<<total<<endl;
		cout<<"Masukkan Jumlah Uang anda : ";cin>>bayar;
		Kembalian = bayar - total;
		cout<<"Kembalian anda adalah : "<<Kembalian<<endl;
	}
	else if(pilihan==2){
		harga = 1000;
		cout<<"Pesan berapa banyak gorengan tahu : ";cin>>banyak;
		total = harga * banyak;
		cout<<"Anda harus membayar sebesar : "<<total<<endl;
		cout<<"Masukkan Jumlah Uang anda : ";cin>>bayar;
		Kembalian = bayar - total;
		cout<<"Kembalian anda adalah : "<<Kembalian<<endl;
	}
	else if(pilihan==3){
		harga = 1500;
		cout<<"Pesan berapa banyak gorengan bakwan : ";cin>>banyak;
		total = harga * banyak;
		cout<<"Anda harus membayar sebesar : "<<total<<endl;
		cout<<"Masukkan Jumlah Uang anda : ";cin>>bayar;
		Kembalian = bayar - total;
		cout<<"Kembalian anda adalah : "<<Kembalian<<endl;
	}
	else if(pilihan==4){
		harga = 1500;
		cout<<"Pesan berapa banyak gorengan pisang : ";cin>>banyak;
		total = harga * banyak;
		cout<<"Anda harus membayar sebesar : "<<total<<endl;
		cout<<"Masukkan Jumlah Uang anda : ";cin>>bayar;
		Kembalian = bayar - total;
		cout<<"Kembalian anda adalah : "<<Kembalian<<endl;
	}
	else if(pilihan==5){
		harga = 2000;
		cout<<"Pesan berapa banyak gorengan sukun : ";cin>>banyak;
		total = harga * banyak;
		cout<<"Anda harus membayar sebesar : "<<total<<endl;
		cout<<"Masukkan Jumlah Uang anda : ";cin>>bayar;
		Kembalian = bayar - total;
		cout<<"Kembalian anda adalah : "<<Kembalian<<endl;
	}
}
