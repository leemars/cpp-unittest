#include "string_calculator_app.h"

#include <string>

int StringCalculatorApp::Run(int argc, char *argv[]) {
    string_calculator.Add(argv[1]);

    std::string str;
    while (getline(input, str) && !str.empty()) {
        string_calculator.Add(str);
    }

    return 0;
}
