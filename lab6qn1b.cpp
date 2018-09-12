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
   
   salestax=unitcst*unit*taxRt;
   totdue=salestax+unit*unitcst;
}
   
 int main()
{  
    int a,b,c,salestax,totdue;
     
    calctax(a,b,c,salestax,totdue);
    cout<<"\n SalesTAX= ";
    cout<<salestax;
    cout<<"\n totdue = ";
    cout<<totdue;
   
  return 0;
}
