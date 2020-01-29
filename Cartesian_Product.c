#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,m,n;
    int a[1000000];
    int b[1000000];
    printf("Enter length of set A and B \n");
    scanf("%d%d",&n,&m);
    printf("Enter elements of set A \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter elements of set B \n");
     for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    printf("{");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("(%d,%d)",a[i],b[j]);
        }
    }
    printf("}");
    getch();
    return 0;
}
    
    