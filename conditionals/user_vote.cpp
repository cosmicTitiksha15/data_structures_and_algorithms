#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age : ";
    cin >> age;
    if(age >= 18){
        cout << "You can vote";
    } else {
        cout << "You can not wait buddy, grow up first!";
    }
    return 0;
}