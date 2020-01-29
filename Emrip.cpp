/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int  prime(int n)
{
    int i=2;
    while(i<n)
    {
        if(n%i==0)
         break;
        i++;
    }
    if(i!=n)
    return false;
    return true;
}

int main()
{   
    int n,c,r=0,i,a;
    cin>>n;
    a=n;
    while(a>0)
    {
        r=r*10+a%10;
        a=a/10;
    }
    if( prime(n) && prime(r))
    {
        cout<<"Emrip Number";
    }
    else 
     cout<<"Not an emrip number";
    return 0;
}
