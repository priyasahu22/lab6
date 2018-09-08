#include<iostream>
using namespace std;
//use functions to return the value of the sum such that user inputed it for sum:
//but for that sum declare an integer that takes value passed by reference:

void sumval(int a1,int a2,int &c)
   
{
    c=a1+a2;
}

 int main()
   
{ 
    
    int a,b;
    cout<<"\n ENTER THE VALUE OF FIRST NUMBER:";
    cin>>a;
    cout<<"\n ENTER THE VALUE OF SECOND NUMBER:";
    cin>>b;
    int sum; 
    // whatever the changes in c will reflect to sum
    sumval(a,b,sum);
    cout<<"\n sum of the value:   "<<sum; 
    return 0;
}
