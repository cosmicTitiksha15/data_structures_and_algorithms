#include <iostream>
using namespace std;

int main(){
    float percentage;
    cout << "Enter your percentage : ";
    cin >> percentage;
    if(percentage >= 90){
        cout << "Grade A";
    } else if(percentage >= 80 && percentage < 90){
        cout << "Grade B";
    } else{
        cout << "Grade C";
    }
    return 0;
}