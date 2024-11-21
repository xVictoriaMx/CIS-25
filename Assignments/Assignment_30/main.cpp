#include <iostream>
#include <string>

using namespace std;

class TextBox {
private:
    string value;

public:
    TextBox() : value("") {}

    void setValue(const string& newValue) {
        value = newValue;
    }

    string getValue() const {
        return value;
    }

    void display() const {
        cout << "TextBox value: " << value << endl;
    }
};

int main() {
    TextBox textBox;
    string userInput;

    cout << "Enter text for the TextBox: ";
    getline(cin, userInput); 
    textBox.setValue(userInput); 
    textBox.display();          

    return 0;
}
