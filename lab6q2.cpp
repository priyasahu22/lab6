#include<iostream>
using namespace std;
//use functions to return the value of the sum such that user inputed it for sum:
//call by value 
int sumval(int a1,int a2)
   
{
    return (a1+a2);
}

 int main()
   
{ 
    
    int a,b;
    cout<<"\n ENTER THE VALUE OF FIRST NUMBER:";
    cin>>a;
    cout<<"\n ENTER THE VALUE OF SECOND NUMBER:";
    cin>>b; 
    cout<<"/n sum of the value:   ";
    cout<<sumval(a,b);
     
    return 0;
}
