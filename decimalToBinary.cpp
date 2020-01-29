/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i,j,k,l,m,n,a,b,c;
    int arr[1000000];
    cin>>n;
    i=0;j=0;
    while(n>0)
    {
        arr[i++]=n%2;
        n=n/2;
        j++;
    }
    while(i>=0)
    {
        cout<<arr[i];
        i--;
    }
    cout<<"\n";
    return 0;
}

