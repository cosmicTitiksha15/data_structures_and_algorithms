#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i=0; i<10; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int target;
    cout << "What number you wanna find in the array ? : ";
    cin >> target;
    int arr[10] = {-86, 90, 34, 127, 89, 12, 90, 789, 12345, 0};
    cout << linearSearch(arr, 10, target) << endl;
    return 0;
}