
//Tax Rate Calculation using Functions 
#include<iostream>
using namespace std;
//a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module.
 int vartocalctax(int &unitcst,int &unit,int &taxRt)
   
 {
    cout<<"\nvalue of unitcst ";
    cin>>unitcst;
    cout<<"\nvalue of unit: ";
    cin>>unit;
    cout<<"\nvalue of taxRt: ";
    cin>>taxRt;

 }
   int main()
{ 
    int a,b,c;
    vartocalctax(a,b,c);
   
  return 0;
}
