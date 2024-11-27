#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int sum(int n)
  {
        int m=n,d=0;
        int s=m*m;
        //while loop begins to count the number of digits
        while(n!=0)
        {
         d++;
         n=n/10;
        }
        int a=s%(int)pow(10,d);
        int b=s/(int)pow(10,d);
        int su=a+b;
        return(su);
  }
  int main()
  {
  	int k=0,num,m;
    cout<<"Enter the upper and lower limits :"<<endl;
    cin>>num>>m;
    //displaying the reasult
    cout<<"The kaprekar numbers within "<<m<<" and "<<num<<" : "<<endl;
    for(int i=m;i<=num;i++)
    {
      if(sum(i)==i)
      {
        cout<<i<<"\t";
        k++;
      }
    }
    cout<<endl;
  }

    
