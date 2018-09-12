//write a function to declare all the variables including salestax,tottax,unitcst,unit,taxRt and output them in readable form

 #include<iostream>

 using namespace std;

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
   
 int main()
 {  
    int a,b,c,salestax,totdue;
     
    calctax(a,b,c,salestax,totdue);
   
   return 0;
 }
