#include <iostream>  
#include <string>
using namespace std;

int main() {
    string user_input = "";
    
    cout << "Please enter your line of text and hit <enter>:" << endl << "> ";
    getline(cin, user_input);
    
    cout << "Your text was: " << user_input;
    
    return 0;
}
