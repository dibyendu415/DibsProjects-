#include<bits/stdc++.h>
#include<math.h>
using namespace std;   
	int dd=0,mm=0,yy=0;
    int jd=0;
        
    int fnleap()
    {
        cout<<"Enter day:"<<endl;
        cin>>dd;
        cout<<"Enter month:"<<endl;
        cin>>mm;
        cout<<"Enter year:"<<endl;
        cin>>yy;
        if(yy%4==0)
        return(1);
        else 
        return(0);
    }
    int fnisvalid()
    {
        if(dd<1||dd>31)
        return(0);
        if(mm<1||mm>12)
        return(0);
        if(yy<1)
        return(0);
        else
        return(1);
    }
    int main()
    {
        int endm[]={31,29,31,30,31,30,31,31,30,31,30,31};
        if(fnleap()==0)
        endm[1]=28;
        int r=0;
        int p=fnisvalid();
        if(p==0)
        {
            cout<<"INVALID INPUT !!!!"<<endl;
            exit(0);
        }
        for(int i=0;i<mm-1;i++)
        r=endm[i]+r;
        jd=dd+r;
        cout<<"JULIAN DATE :"<<jd;
    }
        
