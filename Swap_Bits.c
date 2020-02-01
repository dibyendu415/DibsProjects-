#include<stdio.h>
int main()
{
  int num,m,n;
  scanf("%d"&num);
  scanf("%d%d",&m,&n);
  int x,y;
  x=(num>>m)&1;
  y=(num>>n)&1;
  int p=x^y;
  p=(p<<m) | (p<<n);
  int newnum=num^p;
  printf("Number : %d",newnum);
}
