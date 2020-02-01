# include<bits/stdc++.h> 
# define bool int 
using namespace std;  
bool getParity(unsigned int n) 
{ 
    bool parity=0; 
    while (n) 
    { 
        parity=!parity; 
        n=n&(n-1); 
    }      
    return parity; 
} 
int main() 
{ 
    unsigned int n; 
    cin>>n;
    cout<<"Parity of no "<<n<<" = "<<(getParity(n)? "odd": "even"); 
    getchar(); 
    return 0; 
} 
