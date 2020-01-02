//Basic Calculator using C++

# include <iostream>
using namespace std;
int main()
{
    int ch,sum,diff,m,mod,maxi;
    float divi;
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
        case 2:
            diff=(num1-num2);
            cout<<"Subtraction of two numbers is "<<diff;
            break;
        case 3:
            m=num1*num2;
            cout<<"Multiplication of two numbers is "<<m;
            break;
        case 4:
            divi=num1/num2;
            cout<<"Divison of first number by second is "<<divi;
            break;
        case 5:
             mod=(int)num1 % (int)num2;
             cout<<"Modulus of first numbers with respect to second is "<<mod;
             break;
        case 6:
             maxi=max(num1,num2);
             cout<<"Maximum of two numbers is "<<maxi;
             break;
        default:
            // If the options is not 1-6, error message is shown
            cout << "Error! Option is not correct";
            break;
    }
    return 0;
}
