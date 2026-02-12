#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number : ";
    cin >> num;

    // Upper half of the diamond
    for(int i = 0; i < num; i++){
        for(int j = (num-(i+1)); j > 0; j--){
            cout << " ";
        }
        cout << "*";
        if (i > 0){
            for(int k = 0; k < 2*i-1; k++){
            cout << " ";
            }
        cout << "*";
        }
        cout << endl;
    }

    // Lower half of the diamond
    for(int i = num-2; i >= 0; i--){
        for(int j = 0; j < num-i-1; j++){
            cout << " ";
        }
        cout << "*";
        if (i > 0){
            for(int k = 0; k < 2 * i - 1; k++){
            cout << " ";
        }
        cout << "*";
        }
        cout << endl;
    }
    return 0;
}