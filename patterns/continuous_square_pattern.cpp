#include <iostream>
using namespace std;


int main(){
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int sum = 1;
    for (int i = 0; i < num; i++){
        for (int j = 0; j < num; j++){
            cout << sum << " ";
            sum++;
        }
        cout << endl;
    }
    return 0;
}