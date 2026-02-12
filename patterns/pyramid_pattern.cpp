#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number : ";
    cin >> num;
    for (int i=0; i<num; i++){
        for(int k = num-(i+1); k > 0; k--){
                cout << "  ";
        }
        for (int j=0; j < i+1; j++){
            cout << j+1 << " ";
        }
        for (int l = i; l > 0; l--){
            cout << l << " ";
        }
        cout << endl;
    }
    return 0;
}