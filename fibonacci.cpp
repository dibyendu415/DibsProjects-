/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void fibo(int a,int b,int n)
{   int c;
    if(a<=n)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
        fibo(a,b,n);
    }
}
int main()
{
    cout<<"Enter limit n \n";
    int n;
    cin>>n;
    fibo(0,1,n);

    return 0;
}
