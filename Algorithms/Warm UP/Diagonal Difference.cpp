#include <iostream>
using namespace std ;
int main()    {
   int n ;
   cin>> n ;
   int a1,a2,a3,b1,b2,b3,c1,c2,c3;
   cin>>a1>>a2>>a3;
   cin>>b1>>b2>>b3;
   cin>>c1>>c2>>c3;
   int d,e,f;
   d=(a1+b2+c3);
   e=(a3+b2+c1);
   f=abs(d-e);
   cout<<f<<endl;
}
