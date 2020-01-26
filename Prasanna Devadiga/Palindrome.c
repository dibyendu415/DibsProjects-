#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
//function declaration
void palindrome_check(char string_input[]);// a function is used to check if a string is a palindrome or no
bool a=true;

void palindrome_check(char string_input[]){
int length=strlen(string_input);
for(int lower_bound=0;lower_bound<(length/2);lower_bound++)//lower bound is the leftmost limit of the string
{
    if(string_input[lower_bound]!=string_input[length-lower_bound-1])//array indices start from 0 and end at (length-1) where length stands for the length of string
    {
        a=false;
        break;
    }
}

}
int main() //driver program to test the function
{   char string_input[10000];
    printf("A Palindrome is a word, phrase, or sequence that reads the same backwards as forwards, e.g. madam \n");
    printf("Enter the phrase you want to check\n");
    scanf("%s",&string_input);
    palindrome_check(string_input);
    if(a==false)
        printf("Given string is not a palindrome");
    else
        printf("Given string is a palindrome");
    return 0;
}
