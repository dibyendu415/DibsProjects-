//Basic Calculator using C++

# include <iostream>
#include <cmath>
using namespace std;

template <typename T, typename U>
T find_max(T a, U b)
{
    return a > b ? a : b;
}
int main()
{
    int ch;
    float sum, sub, mul, div,max;
    int mod;
    float num1, num2;
    cout << "Enter option \n 1.Addition \t 2. Subtraction \n 3.Multiplication \t 4. Division \n 5. Modulus \t 6. Maximum of two nos \n ";
    cin >> ch;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    switch(ch)
    {
        case 1:
            sum = num1 + num2;
            cout << "Sum of two numbers is " << sum;
            break;

        case 2:
        	sub = (num1 - num2);
        	cout << "Difference of two numbers is " << sub;
        	break;

        case 3:
        	mul = num1 * num2;
        	cout << "Product of two numbers is " << mul;
        	break;

        case 4:
        	div = num1 / num2;
        	cout << "Division of two numbers is " << div;
        	break;

        case 5:
        	mod = fmod(num1, num2);
        	cout << "Modulus of two number is " << mod;
        	break;

        case 6:
        	max = find_max(num1, num2);
        	cout << "Maximum number is " << max;
        	break;

        default:
            // If the options is not 1-6, error message is shown
            cout << "Error! Option is not correct";
            break;
    }
    return 0;
}
