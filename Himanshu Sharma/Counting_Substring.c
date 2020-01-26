#include <stdio.h>
#include <string.h>
void count(char *str);
int main()
{
    char str(100)
    scanf("%[^\n]",str);
    count(str);
}
void count(char *str)
{
    char tmp[]="the";
    int i,j,c=0,cnt=0;
    for(i-0;i<strlen(str);)
    {
        j=0;c=0;
        while(str[i]==tmp[j]&&j!=3)
        {
            c++;i++;j++;
        }
    if(c==strlen(tmp) && (str[i]==' ' || str[i]==' \n' 1 str[i]==NULL))
    {
        cnt++;
    }
    i++;
    }
printf("%d", cnt);
}
