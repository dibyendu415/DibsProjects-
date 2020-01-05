# A program to check if the a character is a Capital Letter, Small Letter,vowel,consonant, Digit or special Character .

#include<stdio.h>
#include<conio.h>

int main()
{
    char character;
    int a;
    printf("Enter any character:\t");
    scanf("%c",&character);
    a=character;

    if(a>=65&&a<=90)
        printf("\n%c is a CAPITAL LETTER",character);

    if(a>=97&&a<=122)
        printf("\n%c is a SMALL LETTER",character);

    if(a==65||a==69||a==73||a==79||a==85||a==97||a==101||a==105||a==111||a==117)
        printf("\n%c is a VOWEL",character);
    else
        printf("\n%c is a CONSONANT",character);

    if(a>=48&&a<=57)
        printf("\n%c is a DIGIT",character);

    if((a>=0&&a<=47)||(a>=58&&a<=64)||(a>=91&&a<=96)||(a>=123&&a<=127))
        printf("\n%c is a SPECIAL SYMBOL",character);
    printf("\nThe ASCII value of %c is %d",character,a);
    getch();
    return 0;
}

