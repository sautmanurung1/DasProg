#include<iostream>
using namespace std;
int main(){
    int A,B,C;
    cin>>A;
    cin>>B;
    cin>>C;
    if(A>B){
        if(A>C){
            cout<<A;
        } else{
            cout<<C;
        }
    } else{
        if(B>C){
            cout<<B;
        }else{
            cout<<C;
        }
    }
}
