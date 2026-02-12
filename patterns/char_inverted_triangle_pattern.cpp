#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number : ";
    cin >> num;
    char ch = 'A';
    for (int i=0; i<num; i++){
        for(int k = 0; k < i; k++){
                cout << "  ";
        }
        for (int j=num-i; j>0; j--){
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
    return 0;
}