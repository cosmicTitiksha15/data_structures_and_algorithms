#include <iostream>
using namespace std;

int sum_1_to_n(int num)
{
    int sum = 0, i;
    for(i=0; i<=num; i++){
        sum += i;
    }
    return sum;
}

int main(){
    int num;
    cin >> num;
    cout << "Sum of all natural numbers to " << num << " is " << sum_1_to_n(num) << endl;
    return 0;
}