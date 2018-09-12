#include<iostream>
//Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. calling the functions listed above.
using namespace std;

int vartocalctax(int &unitcst,int &unit,int &taxRt)
   
 {
    cout<<"\nvalue of unitcst ";
    cin>>unitcst;
    cout<<"\nvalue of unit: ";
    cin>>unit;
    cout<<"\nvalue of taxRt: ";
    cin>>taxRt;

 }
 void calctax(int unitcst,int unit,int taxRt,int salestax,int totdue)
 {
    cout<<"\nvalue of unitcst ";
    cin>>unitcst;
    cout<<"\nvalue of unit: ";
    cin>>unit;
    cout<<"\nvalue of taxRt: ";
    cin>>taxRt;
    salestax=unit*unitcst*taxRt;
    totdue=salestax+unit*unitcst;
    cout<<"\n value of sales tax:";
    cout<<salestax;
    cout<<"\n value of totdue:";
    cout<<totdue;
 }
   
   
 
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
    //call the functions listed above
    vartocalctax(a,b,c); 
    calctax1(a,b,c,salestax,totdue);
    calctax2(a,b,c,salestax,totdue);
  return 0;
}
