#include <iostream>
using namespace std;

int factorial(int num){
    int product = 1, i;
    for(i=1; i<=num; i++){
        product *= i;
    }
    return product;
}

int main(){
    int num;
    cin >> num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}