#include <iostream>
using namespace std;

int main(){
    int sum, num, i;
    cout << "Enter the number upto which you want to sum odd numbers : ";
    cin >> num; 
    sum = 0; 
    i = 1;
    for(i=1; i<=num; i+=2){
        // cout << i << endl;
        sum += i;
    }
    // while(i <= num){
    //     if (i % 2 != 0)
    //         sum += i;
    //     i++;
    // }
    cout << "The sum of odd numbers upto " << num << " is : " << sum;
    return 0;
}