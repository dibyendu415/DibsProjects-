//Basic Calculator using C++

# include <iostream>
using namespace std;
int main()
{
    int ch,result;
    float num1, num2;
    cout << "Enter option \n 1.Addition \t 2. Subtraction \n 3.Multiplication \t 4. Division \n 5. Modulus \t 6. Maximum of two nos \n ";
    cin >> ch;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    switch(ch)
    {
        case 1:
            result=num1+num2;
            cout<<"Sum of two numbers is "<<result;
            break;
        case 2:
            result=num1-num2;
            cout<<"Difference of two numbers is "<<result;
            break;
        case 3:
            result=num1*num2;
            cout<<"Multiplication of two numbers is "<<result;
            break;
        case 4:
            result=num1/num2;
            cout<<"Division of two numbers is "<<result;
            break;
        case 5:
            result=num1%num2;
            cout<<"Modulus of two numbers is "<<result;
            break;
        case 6:
            result=(num1>num2)?num1:num2;
            cout<<result<<" is greater if two numbers";
            break;
        default:
            // If the options is not 1-6, error message is shown
            cout << "Error! Option is not correct";
            break;
    }
    return 0;
}
