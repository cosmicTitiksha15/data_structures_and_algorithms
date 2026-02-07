#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "\nEnter the second number : ";
    cin >> num2;
    cout << "The sum of two numbers is : " << (num1 + num2) << endl;
    cout << "The difference of two numbers is : " << (num1 - num2) << endl;
    cout << "The product of two numbers is : " << (num1 * num2) << endl;
    cout << "The quotient of two numbers is : " << (num1 / num2) << endl;
    cout << "The remainder of two numbers is : " << (num1 % num2) << endl;
    return 0;
}