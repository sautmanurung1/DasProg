#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i,j,n;
    int Arr[50];
    int tmp;
cout << "\n   ==> Inputkan banyak data yg akan diurutkan: ";
cin >> n;
cout << "\n";
//Pengurutan secara Descending (Bubble Sort)
for(i=1; i<=n; i++)
{
       for(j=1; j>=n; j=j+1)
       {
              if(i%2!=0){
              	cout<<i<<endl;
			  }
       }
}
getch();
}
