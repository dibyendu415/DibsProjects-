#include <iostream>
#include <string>

using namespace std;
//function declaration
void palindrome_check(string string_input);// a function is used to check if a string is a palindrome or no
bool a=true;

void palindrome_check(string string_input){
int string_length=string_input.length();
for(int lower_bound=0;lower_bound<(string_length/2);lower_bound++)//lower bound is the leftmost limit of the string
{
    if(string_input[lower_bound]!=string_input[string_length-lower_bound-1])//array indices start from 0 and end at (length-1) where length stands for the length of string
    {
        a=false;
        break;
    }
}

}
int main() //driver program to test the function
{   char string_input[10000];
    cout<<"A Palindrome is a word, phrase, or sequence that reads the same backwards as forwards, e.g. madam"<<endl;
    cout<<"Enter the phrase you want to check"<<endl;
    cin>>string_input;
    palindrome_check(string_input);
    if(a==false)
        cout<<"Given string is not a palindrome"<<endl;
    else
        cout<<"Given string is a palindrome"<<endl;
    return 0;
}
