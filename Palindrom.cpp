#include <iostream>
using namespace std;

int main (){
    string word;
    cout << "Please enter a string: "; 
    cin >> word;

    bool palindrome = true; 
    for (int i= word.length() - 1; i>=0; i--) {
        int j= (word.length() - 1) - i; 

        if(word[i] != word[j]) {
            palindrome = false; 
        }
    }

    if(palindrome) {
        cout << "That word is a Palindrome!" << endl;
    } else {
        cout << "That word is not a Palindrome!" << endl; 
    }
    return 0; 
}