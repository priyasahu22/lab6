//UpperCase and LowerCase

/* a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa.*/

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
  int m; 
   
  char a;
  cout<<"\n Enter Any Alphabet To convert it into EITHER INTO in lowercase or uppercase:";
  cin>>a;
  m=int(a);
  if(m>=97&&m<=122)
  {
   cout<<"\n Uppercase of the entered character is: ";
   int s=int(a);
   cout<<toUpper(s);
 } 
  else
  {
   cout<<"\n lowercase of the entered character is: ";
   int s=int(a);
   cout<<toLower(s);
 }
 
   return 0;
}
