#include <iostream>
using namespace std;

int main(){
    int product, num, i;
    cout << "Enter the number you want to print factorial of : ";
    cin >> num;
    product = 1;
    for(i=1; i <= num ; i++){
        product *= i;
    }
    cout << "Factorial of " << num << " is : " << product;
    return 0;
}