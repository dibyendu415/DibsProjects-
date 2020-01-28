#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() 
{
        int n,r1,r2,c1,c2,k=1,i,j;
        cout<<"Enter matrix size:"<<endl;
        cin>>n;
        int a[n][n];
        c1=0;c2=n-1;r1=0;r2=n-1;
        do
        {
            //arranging the matrix
            for(i=c1;i<=c2;i++)
            {
                a[r1][i]=k;
                k++;
            }
            for(j=r1+1;j<=r2;j++)
            {
                a[j][c2]=k;
                k++;
            }
            for(i=c2-1;i>=c1;i--)
            {
                a[r2][i]=k;
                k++;
            }
            for(j=r2-1;j>=r1+1;j--)
            {
                a[j][c1]=k;
                k++;
            }
            c1++;c2--;r1++;r2--;
        }
        while(k<=n*n);
        //printing the new matrix
        cout<<"Circular matrix is listed below:"<<endl;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            cout<<a[i][j]<<"\t";
            cout<<endl;
        }
}
	
