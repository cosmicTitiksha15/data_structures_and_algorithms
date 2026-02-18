#include <iostream>
using namespace std;

int printHello(){
    cout << "Hello!" << endl;
    return 2;
}

int main(){
    int val;
    val = printHello();
    cout << val;
    return 0;
}