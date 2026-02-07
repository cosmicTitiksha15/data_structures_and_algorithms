#include <iostream>
using namespace std;

int main(){
    // Implicit type casting -> conversion
    char grade = 'A';
    int variable = grade;
    cout << variable << endl;

    // Explicit type casting - casting
    double price = 2.9984;
    int new_price = price;
    cout << new_price << endl;
    return 0;
}