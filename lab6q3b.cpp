#include<iostream>
using namespace std;
//create a function that find the largest of the two value and pass the 3rd variable by reference and the store the largest of that value.
//input the two value from the user:
void max2num( int a1,int a2,int&c)
 {
   if(a1>a2)
  {
    c=a1;
  }
 
 else
 {
    c=a2;
  }
}

int main()
{
   int a,b,large;
  cout<<" \nENTER FIRST NUMBER:";
  cin>>a;
  cout<< " \nENTER SECOND NUMBER:";
  cin>>b;
  cout<<"\n The Largest OF Two Numbers IS:  ";
  max2num(a,b,large);
  cout<<large;
  return 0;
}
     
