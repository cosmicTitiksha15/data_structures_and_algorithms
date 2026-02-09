#include <iostream>
using namespace std;

int main(){
    int sum, num, i;
    cout << "Enter the number upto which you want to sum even numbers : ";
    cin >> num; 
    sum = 0;
    for(i=0; i<=num; i+=2){
        cout << i << endl;
        sum += i;
    }
    cout << "The sum of even numbers upto " << num << " is : " << sum;
    return 0;
}