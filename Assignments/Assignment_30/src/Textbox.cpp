#include "TextBox.hpp"
#include <iostream>

using namespace std;

namespace Textbox {
    TextBox::TextBox() : value("") {}

    TextBox::TextBox(const string& initialValue) : value(initialValue) {}

    void TextBox::setValue(const string& newValue) {
        value = newValue;
    }

    string TextBox::getValue() const {
        return value;
    }

    void TextBox::display() const {
        cout << "TextBox value: " << value << endl;
    }
}