//Print the following Series using a menu driven program
//1. Fibonacci series
//2. n natural numbers
//3. n prime numbers
//4. n even numbers
//5. n pallindrome numbers

//Find Sum of the following
//6. 1+4+9+16+.....
//7. 1+2+6+24+120+.....
//8. 1/2+2/3+3/4+4/5+....

#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

void natural(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        cout << i << " ";
    }
    cout << endl;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}
void printPrime(int n)
{
    for (int i = 2; i <= n; i++) {
        if (isPrime(i))
            cout << i << " ";
    }
}

void even_number(int n)
{
    for (int i = 0; i <= n; i = i + 2)
    {
        cout << i << " ";
    }
    cout << endl;
}

int createPalindrome(int input, int b, bool isOdd)
{
    int n = input;
    int palin = input;
    if (isOdd)
        n /= b;
    while (n > 0)
    {
        palin = palin * b + (n % b);
        n /= b;
    }
    return palin;
}
void generatePalindromes(int n)
{
    int number;
    for (int j = 0; j < 2; j++)
    {
        int i = 1;
        while ((number = createPalindrome(i, 10, j % 2)) < n)
        {
            cout << number << " ";
            i++;
        }
    }
}

void square_sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += i * i;
    }
    cout << sum << endl;
}


int fact(int n)
{
    if (n <= 0)
        return 1;
    else
        return fact(n - 1) * n;
}

int sum_fact(int n)
{
    int sum1 = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum1 += fact(i);
    }
    cout << sum1 << endl;
}

int series(int n)
{
    int a = 1;
    float sum_series = 0;
    for (int i = 0; i < n; ++i)
    {
        sum_series += (float) a / (a + 1);
        a++;
    }
    cout << sum_series << endl;
}
int main()
{
    int ch;

    cout << "Enter option \n";
    cout<<"1. Print Fibonacci series\n";
    cout<<"2. n natural numbers\n";
    cout<<"3. n prime numbers\n";
    cout<<"4. n even numbers\n";
    cout<<"5. n pallindrome numbers\n";
    cout<<"6. 1+4+9+16+.....\n";
    cout<<"7. 1+2+6+24+120+.....\n";
    cout<<"8. 1/2+2/3+3/4+4/5+....\n";
    cin >> ch;
    int n1;
    cin >> n1;
    switch(ch)
    {
        case 1:
            cout << fib(n1);
            break;

        case 2:
            natural(n1);
            break;

        case 3:
            printPrime(n1);
            break;

        case 4:
            even_number(n1);
            break;

        case 5:
            generatePalindromes(n1);
            break;

        case 6:
            square_sum(n1);
            break;

        case 7:
            sum_fact(n1);
            break;

        case 8:
            series(n1);
            break;

        default:
            // If the options is not 1-8, error message is shown
            cout << "Error! Option is not correct";
            break;
    }
    return 0;
}
