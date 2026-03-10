#include <iostream>
#include <climits>
using namespace std;

int main(){
    int size, largest=INT_MIN;
    cout << "Enter the size of the Array : ";
    cin >> size;
    int arr[size];
    int smallest=INT_MAX;

    for(int i=0; i<size; i++){
        cin >> arr[i];
        if(arr[i] >= largest){
            largest = arr[i];
        }
        if(arr[i]<=smallest){
            smallest = arr[i];
        }
    }
    cout << "Largest number = " << largest << endl;
    cout << "Smallest number = " << smallest << endl;

    return 0;
}