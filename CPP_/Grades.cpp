#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter a marks :";
    cin>>marks;

    if(marks>=80)
    {
    cout<<"A Grade";
    }
    else {
        if(marks>=70)
        {
            cout<<"B Grade";
        }
        else{
            if(marks>40)
            {
                cout<<"C Grade";
            }
            else{
                if(marks<=40)
                {
                    cout<<"Fail";
                }
            }
        }
    }
    return 0;
}