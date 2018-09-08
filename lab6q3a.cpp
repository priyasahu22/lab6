#include<iostream>
using namespace std;
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

int main()
{
   int a,b;
  cout<<" \nENTER FIRST NUMBER:";
  cin>>a;
  cout<< " \nENTER SECOND NUMBER:";
  cin>>b;
  cout<<"\n The Largest OF Two Numbers IS:  ";
  cout<< max2num(a,b);
  return 0;
}
     
