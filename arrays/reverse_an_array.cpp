#include <iostream>
using namespace std;

int main(){
    int arr[] = {12, 13, 45, 67, -12, 56, -90, 105, 160, 67};
    for(int i=0; i<10; i++){
        cout << arr[9-i] << " ";
    }
    return 0;
}