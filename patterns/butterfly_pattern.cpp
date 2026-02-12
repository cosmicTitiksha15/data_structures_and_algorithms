#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the value of num : ";
    cin >> num;

    // Upper half
    for(int i = 0; i < num; i++){
        for(int j = 0; j < i+1; j++){
            cout << "*";
        }
        for(int j = 2*(num-i-1); j > 0; j--){
            cout << " ";
        }
        for(int j = 0; j < i+1; j++){
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for(int i = 0; i < num; i++){
        for(int j = num-i; j > 0; j--){
            cout << "*";
        }
        for(int j = 0; j < 2*(i); j++){
            cout << " ";
        }
        for(int j = num-i; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}