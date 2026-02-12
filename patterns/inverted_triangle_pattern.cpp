#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number : ";
    cin >> num;
    for (int i=0; i<num; i++){
        for(int k = 0; k < i; k++){
                cout << "  ";
        }
        for (int j=num-i; j>0; j--){
            cout << i+1 << " ";
        }
        cout << endl;
    }
    return 0;
}