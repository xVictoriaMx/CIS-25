#ifndef TEXTBOX_HPP
#define TEXTBOX_HPP

#include <string>

using namespace std;

class TextBox {
private:
    string value;  

public:
    TextBox();

    explicit TextBox(const string& initialValue);

    void setValue(const string& newValue);

    string getValue() const;

    void display() const;
};

#endif  
