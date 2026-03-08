#include <iostream>
using namespace std;

int main(){
    int binNum, rem, ans = 0, pow = 1;
    cout << "Enter the binary number to calculate its decimal : ";
    cin >> binNum;
    while(binNum > 0){
        rem = binNum % 10;
        ans += (rem * pow);
        binNum = binNum / 10;
        pow *= 2;
        
    }
    cout << ans << endl;
    return 0;
}