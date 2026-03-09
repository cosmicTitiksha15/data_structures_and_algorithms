#include <iostream>
using namespace std;

int main(){
    int reversed_num = 0, num, rem;
    cout << "Enter the number : ";
    cin >> num;
    while(num > 0){
        rem = num % 10;
        reversed_num = (reversed_num * 10) + rem;
        num = num / 10;
    }
    cout << "The reversed number obtained is : " << reversed_num << endl;
    return 0;
}