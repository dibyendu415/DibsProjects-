//This program will solve the mentioned issue number #72
//Credits:Ashu Yadav
//Finding all permutation that can be formed by a user entered string.
//Im considering small input string for the current moment of time

#include<bits/stdc++.h>
using namespace std;

void ans(string s,int beg,int end){
    //if the beg and ending index of the string are same in our passed rec fun then print the string
    //this is our base case that will stop the rec call
    if(beg==end){
        cout<<s<<endl;
    }else{
        //traversing the string from beg index to last
        for(int i=beg;i<=end;i++){
            //using ibuilt swap function,you can create your own swap function also using a temp variable
            swap(s[beg],s[i]);
            //call to our fun
            ans(s,beg+1,end);
            swap(s[beg],s[i]);
        }
    }
}

int main(){
    //user entered string is stored
    string s;
    cin>>s;
    //length of the string 
    int len=s.length();
    //our recursive function called
    ans(s,0,len-1);
    return 0;
}