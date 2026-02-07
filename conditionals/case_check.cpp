#include <iostream>
using namespace std;

int main(){
    char entry;
    int ascii_val;
    cout << "Enter the character to check its case : ";
    cin >> entry;
    ascii_val = int(entry);
    if(ascii_val >= 65 && ascii_val <= 90){
        cout << entry << " is an uppercase letter.";
    } else if(ascii_val >= 97 && ascii_val <= 122){
        cout << entry << " is a lowercase letter.";
    } else{
        cout << "Sorry, for now, it only checks for uppercase or lowercase english alphabet.";
    }
    return 0;
}