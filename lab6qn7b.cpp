/*Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.
*/ 
#include<iostream>
using namespace std;

char toLower(int s)
{
  int p;
  for(int i=65;i<=90;i++)
{
  if(s==i)
  {
  p=i;
  }
}
char d=char(s+32);
return d;
}
int main()
{
  char a;
  cout<<"\n Enter Any Alphabet To convert it into lowercase:";
  cin>>a;
  cout<<"\n lowercase of the entered character is: ";
  int s=int(a);
  cout<<toLower(s);
  return 0;
}
