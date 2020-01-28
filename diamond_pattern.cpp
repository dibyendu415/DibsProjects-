#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
        int i,j,k,m=5;
        //message to be displayed on screen
        cout<<"Enter a character"<<endl;
        char ch;
        cin>>ch;
        cout<<"The required pattern:"<<endl;
        //printing the pattern
        for(i=1;i<=5;i++)
        {
               for(j=1;j<=m;j++)
               cout<<" ";
               for(k=1;k<=i;k++)
               cout<<ch<<" ";
               cout<<endl;
               m=m-1;
        }
        m=2;
        for(i=4;i>=1;i--)
        {
            for(j=1;j<=m;j++)
            cout<<" ";
            for(k=1;k<=i;k++)
            cout<<ch<<" ";
            cout<<endl;
            m=m+1;
        }
 }


