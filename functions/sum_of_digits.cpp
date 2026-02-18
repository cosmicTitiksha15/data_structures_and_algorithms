#include <iostream>
using namespace std;

int sum_of_digits(int num){
    int rem, sum = 0;
    while(num > 0){
        rem = num % 10;
        sum += rem;
        num = num / 10;
    }
    return sum;
}

int main(){
    int num;
    cin >> num;
    cout << "Sum of digits of " << num << " is " << sum_of_digits(num);
    return 0;
}