#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int m;
    scanf("%d",&m);
    int tmp[m];
    for(int i=0;i<m;i++)
        tmp[i]=a[i];
    
    int j=0;
    for(int i=0;i<n;i++){
        if((i+m)>=n){
            a[i]=tmp[j];
            j++;
        } 
        else
            a[i]=a[i+m];
    }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
