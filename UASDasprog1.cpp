 #include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i,j,n;
    int Arr[50];
    int tmp;
cout << "\n   ---------------------------------------------";
cout << "\n   |       >> Program Pengurutan Data <<       |";
cout << "\n   |           >> Secara Descending <<         |";
cout << "\n   |              >> Bubble Sort <<            |";
cout << "\n   ---------------------------------------------\n";
cout << "\n   ==> Inputkan banyak data yg akan diurutkan: ";
cin >> n;
cout << "\n";
for(i=1; i<=n; i++)
{
       cout<<"\tInputkan data ke-"<<i<<" = ";
       cin>>Arr[i];
}

//Pengurutan secara Descending (Bubble Sort)
for(i=1; i<=n; i++)
{
       for(j=i; j<=n; j++)
       {
              if(Arr[i] < Arr[j])
              {
                     tmp = Arr[j];
                     Arr[j] = Arr[i];
                     Arr[i] = tmp;
              }
       }
}
cout << "\n   ---------------------------------------------\n";
cout << "   ## Hasil Pengurutan data Secara Descending ##\n";
cout << "   ---------------------------------------------\n";
cout << "\n";
for(i=1;i<=n;i++)
{
       cout<<"\tElement "<<i<<" = "<<Arr[i]<<endl;
}

getch();
}
