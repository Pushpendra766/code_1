#include<iostream>
using namespace std;
int sum(int x,int y)
{
  int z;
  z=x+y;
  return z;
}
int sub(int x,int y)
{
  int z;
  z=x-y;
  return z;
}
int mul(int x,int y)
{
  int z;
  z=x*y;
  return z;
}
int div(int x,int y)
{
  int z;
  z=x/y;
  return z;
}
void main()
{
int a,b,c,n;
int x;
do
{
  cout<<"!!!Welcome to my Calculator!!!\n";
  cout<<"___Main Menu___\n";
  cout<<"1.Addition\n";
  cout<<"2.Subtraction\n";
  cout<<"3.Multiplication\n";
  cout<<"4.Division\n";
  cout<<"Enter Your Choice:";
  cin>>n;
  cout<<"\nEnter two numbers :";
  cin>>a>>b;
  switch(n)
  {
    case 1:
      c=sum(a,b);
      cout<<"\nSum of"<<a<<"and"<<b<<"is"<<c;
      break;
    case 2:
      c=sub(a,b);
      cout<<"\nDifference between"<<a<<"and"<<b<<"is"<<c;
      break;
    case 3:
      c=mul(a,b);
      cout<<"\nProduct of"<<a<<"and"<<b<<"is"<<c;
      break;
    case 4:
      c=div(a,b);
      cout<<"\nQuotient of"<<a<<"and"<<b<<"is"<<c;
      break;
  }
  cout<<"\nDo you want to exit from calculator or want to do another calculation\n";
  cout<<"1(for another calculation) or 0(for exit):";
  cin>>x;
}while(x)
cout<<"!!!THANKYOU!!!";
}
