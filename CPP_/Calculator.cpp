#include<iostream>
using namespace std;
int main()
{
int n1,n2;
cout<<"Enter 2 numbers";
cin>>n1>>n2;

char op;
cout<<" Enter a operator";
cin>>op;

switch(op)
{
    case '+':
    cout<<n1+n2;
    break;

    case '-':
    cout<<n1-n2;
    break;
 
 case '*':
    cout<<n1*n2;
    break;

 case '/':
    cout<<n1/n2;
    break;

default:
cout<<"Invalid operator";
break;


}
return 0;
}