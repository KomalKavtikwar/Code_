#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
        cout<<"Maximum number is "<<a<<endl;
        }
         else
        {
            cout<<"maximum no is:"<<c<<endl;
        }
    }else{
        if(b>c){
        cout<<"Maximum number is :"<<b<<endl;

        }
        else{

        cout<<"Maximum number is :"<<c<<endl;
    }
        
    }
    return 0;
}