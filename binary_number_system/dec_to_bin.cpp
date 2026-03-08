#include <iostream>
using namespace std;

int main(){
    int num, rem, ans = 0, pow = 1;
    cout << "Enter the number : ";
    cin >> num;
    while(num > 0){
        rem = num % 2;
        num = num / 2;
        ans += (rem * pow);
        pow = pow * 10;
    }
    cout << ans << endl;
    return 0;
}
