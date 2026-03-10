#include <iostream>
#include <climits>
using namespace std;

int main(){
    int size, largest=INT_MIN, largest_index, smallest_index;
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

    for (int i = 0; i < size; ++i) {
        if (arr[i] == largest) {
            largest_index = i;
        }
        if(arr[i] == smallest){
            smallest_index = i;
        }
    }
    cout << "Largest number's Index = " << largest_index << endl;
    cout << "Smallest number's Index = " << smallest_index << endl;

    return 0;
}