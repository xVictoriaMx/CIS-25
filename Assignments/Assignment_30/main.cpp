#include <iostream>
#include <string>
#include "TextBox.hpp"  

using namespace std; 

int main() {
    TextBox textBox1;
    string userInput;

    cout << "Enter text for the first TextBox: ";
    getline(cin, userInput);
    textBox1.setValue(userInput);
    textBox1.display();

    string initialText = "Hello There!";
    TextBox textBox2(initialText);  
    textBox2.display();  

    return 0;
}
