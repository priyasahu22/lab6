#include<iostream>
using namespace std;
//create a function that find the smallest of the two value and pass the 3rd variable by reference and the store the smallest of that value.
//input the two value from the user:
void min2num( int a1,int a2,int&c)
 {
   if(a1<a2)
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
   int a,b,small;
  cout<<" \nENTER FIRST NUMBER:";
  cin>>a;
  cout<< " \nENTER SECOND NUMBER:";
  cin>>b;
  cout<<"\n The Smallest OF Two Numbers IS:  ";
  min2num(a,b,small);
  cout<<small;
  return 0;
}
     
