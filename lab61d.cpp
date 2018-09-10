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

 void calctax1(int unitcst,int unit,int taxRt,int salestax,int totdue)
 {
    cout<<"\nvalue of unitcst ";
    cin>>unitcst;
    cout<<"\nvalue of unit: ";
    cin>>unit;
    cout<<"\nvalue of taxRt: ";
    cin>>taxRt;
    cout<<"\n value of sales tax:";
    cin>>salestax;
    cout<<"\n value of :";
    cin>>totdue;
 }
   
 
  
 void calctax2(int unitcst,int unit,int taxRt,int &salestax,int &totdue)
{
    cout<<"\nvalue of unitcst ";
    cin>>unitcst;
    cout<<"\nvalue of unit: ";
    cin>>unit;
    cout<<"\nvalue of taxRt: ";
    cin>>taxRt;    
    cout<<"\n value of sales tax:";
    cin>>salestax;
    cout<<"\n value of :";
    cin>>totdue;
 
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
