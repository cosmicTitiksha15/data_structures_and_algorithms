#include <iostream>
using namespace std;

int main(){
    int sum, num, i;
    cout << "Enter the number upto which, you want the sum : ";
    cin >> num;
    sum = 0;
    for(int i = 1; i <= num; i++){
        sum += i;
    }
    // i = 1;
    // while (i <= num){
    //     sum += i;
    //     i++;
    // }
    cout << "The sum of natural numbers upto " << num << " is : " << sum;
    return 0;
}