//UpperCase and LowerCase
/*Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.*/
/*Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.
Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa.*/ 
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
  cout<<toUpper(s);
  return 0;
}
