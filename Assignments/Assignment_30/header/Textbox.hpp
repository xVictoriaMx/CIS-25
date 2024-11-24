#ifndef TEXTBOX_H
#define TEXTBOX_H

#include <string>

using namespace std;

namespace Textbox {
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
}

#endif  