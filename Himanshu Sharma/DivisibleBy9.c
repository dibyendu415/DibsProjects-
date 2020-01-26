#include<stdio.h>
int divisibleby9(int n)
{
  if(n==9 || n==0)
    return 1;
  if(n<9)
    return 0;
  int x=n>>3;
  int y=n&7;
  n=x-y;
  return divisibleby9(n);
}
int main()
{
  int n;
  scanf("%d",&n);
  if(divisibleby9(n))
    printf("Yes");
  else
    printf("No");
}
