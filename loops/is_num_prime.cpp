#include <iostream>
using namespace std;


int main(){
    int num, i;
    cout << "Enter the number, you want to check primicity for : ";
    cin >> num;
    for (i=2; i<=num-1; i++){
        if (num%i == 0){
            cout << num << " is non-prime.";
            break;
        }
    }
    return 0;
}