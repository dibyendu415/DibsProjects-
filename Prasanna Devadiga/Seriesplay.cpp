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

# include <iostream>
using namespace std;
int main()
{
    int ch;
    
    cout << "Enter option \n";
    cout<<"1. Print Fibonacci series\n";
    cout<<"2. n natural numbers\n";
    cout<<"3. n prime numbers\n";
    cout<<"4. n even numbers\n";
    cout<<"5. n pallindrome numbers\n";
    cout<<"6. 1+4+9+16+.....n";
    cout<<"7. 1+2+6+24+120+.....\n";
    cout<<"8. 1/2+2/3+3/4+4/5+....\n";
    cin >> ch;
    
    switch(ch)
    {
        case 1:
            
        default:
            // If the options is not 1-8, error message is shown
            cout << "Error! Option is not correct";
            break;
    }
    return 0;
}
