// We have to count the number of pairs whose sum is divisible by the number pased by the user
//iterative search can give TLE so we will be using another approach here
//Credits:Ashu Yadav

#include<bits/stdc++.h>
using namespace std;
//logic
int ans(int a[],int n,int k){
    //array to store remainder
    int occ[k]={0};
    //remainder 
    for(int i=0;i<n;i++)occ[a[i]%k]++;
    //count initiated
    int count=occ[0]*(occ[n-1])/2;
    //counting all apirs using n*n-1/2 as number of pairs
    for(int i=1;i<=k/2 && i!=(k-i);i++){
        count+=occ[i]*occ[k-i];
        if(k%2==0)count+=(occ[k/2]*occ[k/2-1])/2;
    }
    return count;
}   

int main(){
    //size of array
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int k;
    cin>>k;
    //ans
    cout<<ans(a,n,k)<<endl;
    return 0;
}