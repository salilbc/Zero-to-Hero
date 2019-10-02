#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char string[20];
    int i, length;
    int isPalindrome = 0;
    
    cout << "Enter a string: "; cin >> string;
    
    length = strlen(string);
    
    for(i=0;i < length ;i++){
        if(string[i] != string[length-i-1]){
            isPalindrome = 1;
            break;
   }
}
    
    if (isPalindrome) {
        cout << string << " is not a palindrome" << endl; 
    }    
    else {
        cout << string << " is a palindrome" << endl; 
    }
    return 0;
}