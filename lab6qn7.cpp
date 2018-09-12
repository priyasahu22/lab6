//UpperCase and LowerCase
/*Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.*/

#include<iostream>
using namespace std;

char toUpper(int s)
{
  int p;
  for(int i=97;i<=122;i++)
{
  if(s==i)
  {
  p=i;
  }
}
char d=char(s-32);
return d;
}
int main()
{
  char a;
  cout<<"\n Enter Any Alphabet To convert it into lowercase:";
  cin>>a;
  cout<<"\n Uppercase of the entered character is: ";
  int s=int(a);
  c


out<<toUpper(s);
  return 0;
}
