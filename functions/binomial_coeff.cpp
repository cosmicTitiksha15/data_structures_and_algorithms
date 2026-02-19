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
    int n, r;
    float n_C_r;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the value of r : ";
    cin >> r;

    n_C_r = factorial(n)/(factorial(r)*factorial(n-r));
    cout << "The value of n_C_r is : " << n_C_r;

    return 0;
}