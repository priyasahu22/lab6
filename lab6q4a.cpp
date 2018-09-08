#include<iostream>
using namespace std;
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
   int a,b;
  cout<<" \nENTER FIRST NUMBER:";
  cin>>a;
  cout<< " \nENTER SECOND NUMBER:";
  cin>>b;
  cout<<"\n The smallest OF Two Numbers IS:  ";
  cout<< min2num(a,b);
  return 0;
}
     
