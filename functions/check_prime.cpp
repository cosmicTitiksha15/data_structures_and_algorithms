#include <iostream>
using namespace std;

char is_prime(int num){
    int i;
    char val;
    val = 'T';
    for(i=2; i<num; i++){
        if(num%i == 0){
            val = 'F';
            break;
        }
            
    }
    return val;
}

int main(){
    int num;
    cin >> num;
    cout << "Is prime ? : " << is_prime(num);
    return 0;
}