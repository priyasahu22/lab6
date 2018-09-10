

//Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.
#include<iostream>
using namespace std;

 void calctax(int unitcst,int unit,int taxRt,int &salestax,int &totdue)
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
    int a,b,c,salestax,totdue;
     
    calctax(a,b,c,salestax,totdue);
   
  return 0;
}
