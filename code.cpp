#include<iostream>
using namespace std;
int sum(int x,int y)
{
  int z;
  z=x+y;
  return z;
}
void main()
{
int a,b,c;
cout<<"Enter two numbers :";
cin>>a>>b;
  c=sum(a,b);
cout<<"Sum is "<<c;
}
