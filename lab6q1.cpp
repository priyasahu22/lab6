#include<iostream>
using namespace std;
//use functions to return the value inputed from the user
 int vartocalctax(int unit,int unitcst,int taxRt)
   
 {
    cout<<"\nvalue of unitcst ";
    cout<<unitcst;
    cout<<"\nvalue of unit: ";
    cout<<unit;
    cout<<"\nvalue of taxRt: ";
    cout<<taxRt;

 }
   int main()
{ 
    /*int unitcst;
    int unit;
    int taxRt; */
    int a,b,c;
    cout<<"\n ENTER THE VALUE OF UNIT:";
    cin>>b;
     cout<<"\n ENTER THE VALUE OF UNITCST:";
     cin>>a; 
     cout<<"\n ENTER THE VALUE OF TAXRT:";
     cin>>c;
   vartocalctax(b,a,c);
   
  return 0;
}
