
//FUNCTIONS TO CALCULATE THE SUM OF THE EVEN AND ODD NUMBERS AND SUM OF THEIR SQUARES:
#include<iostream>

using namespace std;

int sumeven(int a1,int a2)
{  
   int sum=0;
   for(int i=a1;i<=a2;i++)
{
  if(i%2==0)
{
   sum=sum+i;
}
}
return sum;
}
int sumodd(int a1,int a2)
{  
   int sum=0;
   for(int i=a1;i<=a2;i++)
{
  if(i%2!=0)
{
   sum=sum+i;
}
}
return sum;
}
int sumsqreven(int a1,int a2)
{  
   int sum=0;
   for(int i=a1;i<=a2;i++)
{
  if(i%2==0)
{
   sum=sum+i*i;
}
}
return sum;
}
int sumsqrodd(int a1,int a2)
{  
   int sum=0;
   for(int i=a1;i<=a2;i++)
{
  if(i%2!=0)
{
   sum=sum+i*i;
}
}
return sum;
}
int main()
{
  int a,b,x;
  cout<<"\n ENTER first NUMBER: ";
  cin>>a;
  cout<<"\nenter second number:  ";
  cin>>b;
  cout<<"\n BETWEEN THE TWO NUMBERS WHAT U WANT TO FIND:";
  cout<<"\n sum of:";
  cout<<"\n1.even numbers:";
  cout<<"\n2.odd numbers:";
  cout<<"\n3.square of even numbers:";
  cout<<"\n4.square of odd numbers:";
  cin>>x;

if(x==1)
{  
  cout<<"\nthe sum is: ";
  cout<<sumeven(a,b);
}
else if(x==2)
{
  cout<<"\nthe sum is:";
  cout<<sumodd(a,b);
}

else if(x==3)
{
  
  cout<<"the sum is: ";
  cout<<sumsqreven(a,b);
} 
else 
{  
  cout<<"the sum is: ";
  cout<<sumsqrodd(a,b);
}

return 0;
}








