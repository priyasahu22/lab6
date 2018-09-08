#include<iostream>
using namespace std;
//use different functions to adding finding maimum of two value and lastly minimum of the two value:
//function should called according to the user wish 
int sumval(int a1,int a2)
   
{
    return (a1+a2);
}

//create a function that compare the two value retrurns the largest of it.
//input the two value from the user:
int max2num( int a1,int a2)
 {
   if(a1>a2)
  {
    return a1;
  }
 
 else
 {
    return a2;
  }
}
//create a function that find the minimum of two value retrurns the minimum of it.
//input the two value from the user:
int min2num( int a1,int a2)
 {
   if(a1<a2)
  {
    return a1;
  }
 
 else
 {
    return a2;
  }
}

int main()
{
   int a,b,x;
  cout<<" \nENTER FIRST NUMBER:";
  cin>>a;
  cout<< " \nENTER SECOND NUMBER:";
  cin>>b;
  cout<<"\n what operation or comparison you want :  ";
  cout<<"\n1.addition:";
  cout<<"\n2.maximum of two value:";
  cout<<"\n3.minimum of two value:\n";
  cin>>x;
  if(x==1)
{
  cout<<"\n the sum is:  ";
  cout<<sumval(a,b);
  
}
else if(x==2)
{
  cout<<"\n the max of two number is: ";
  cout<<max2num(a,b);
}
else
{
  cout<<"\n the min of two number is: ";
  cout<<min2num(a,b);
}
return 0;
}
       
