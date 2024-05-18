#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter 4 numbers"<<endl;
    cin>>a>>b>>c>>d;
    
    
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                cout<<"a is greater"<<endl;
            }
        }
    }
    else{
        if(b>c)
            {
                if(b<d)
                    {
                        cout<<"b is greater"<<endl;
                    }
            }
        else{
            if(c<d)
            {
                cout<<"c is greater"<<endl;
                
            }
            else{
                cout<<"d is greater"<<endl;
            }
        }
        
    }
                    
  return 0; 
}