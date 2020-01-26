//Basic Calculator using C++

# include <iostream>
using namespace std;
int main()
{
    int ch,sum;
    float num1, num2;
    cout << "Enter option \n 1.Addition \t 2. Subtraction \n 3.Multiplication \t 4. Division \n 5. Modulus \t 6. Maximum of two nos \n ";
    cin >> ch;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    switch(ch)
    {
        case 1:
            sum=num1+num2;
            cout<<"Sum of two numbers is "<<sum;
            break;
        default:
            // If the options is not 1-6, error message is shown
            cout << "Error! Option is not correct";
            break;
    }
    return 0;
}
