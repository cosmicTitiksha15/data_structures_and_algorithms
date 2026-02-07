#include <iostream>
using namespace std;

int main(){
    int age;
    bool output;
    cout << "Enter you age : ";
    cin >> age;
    cout << ((age >= 18) ? "You can drive." : "You can not drive");
    return 0;
}