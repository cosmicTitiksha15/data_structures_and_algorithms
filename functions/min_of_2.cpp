#include <iostream>
using namespace std;

// Minimum of 2 numbers
int min(int a, int b){
    int s;
    if (a < b)
        s = a;
    else
        s = b;
    return s;
}


int main(){
    cout << min(10,5);
    return 0;
}