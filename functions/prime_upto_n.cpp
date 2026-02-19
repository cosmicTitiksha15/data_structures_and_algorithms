#include <iostream>
using namespace std;

void print_primes(int num){
    for(int i=2; i<=num; i++){
        bool is_prime = true;

        for(int j =2; j < i; j++){
            if(i%j == 0)
            {
                is_prime = false;
                break;
            }
        }
    if(is_prime){
        cout << i << " ";
    }
    }
    cout << endl;
}


int main(){
    int num;
    cin >> num;
    print_primes(num);
    return 0;
}