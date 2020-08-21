#include<iostream>
using namespace std ; 
int main (){
    int a0,a1,a2 ; 
    cin>>a0>>a1>>a2;
    int b0,b1,b2;
    cin>>b0>>b1>>b2;

    int A =0 ,B=0;
    if (a0>b0){
        A++;
    }
    if (a0<b0){
        B++;
    }
    if(a1>b1){
        A++;
    }
    if(a1<b1){
        B++;
    }
    if(a2>b2){
        A++;
    }
    if(a2<b2){
        B++;
    }

    cout<<A<<" "<<B;
}
