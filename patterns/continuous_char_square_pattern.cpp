#include <iostream>
using namespace std;


int main(){
    int num;
    cout << "Enter the number : ";
    cin >> num;
    char ch = 'A';
    for (int i = 0; i < num; i++){
        for (int j = 0; j < num; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}