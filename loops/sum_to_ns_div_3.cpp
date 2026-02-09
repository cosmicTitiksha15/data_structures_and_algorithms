#include <iostream>
using namespace std;

int main(){
    int num, sum, i;
    cout << "Enter the number upto which you want the sum : ";
    cin >> num;
    sum = 0;
    for(i=1; i <=num; i++){
        if (i % 3 == 0){
            sum += i;
        }
    }
    cout << "The sum of all natural numbers upto " << num << " which are divisible by 3 is : " << sum;
    return 0;
}