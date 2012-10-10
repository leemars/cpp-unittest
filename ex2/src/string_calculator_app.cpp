#include "string_calculator_app.h"

int StringCalculatorApp::Run(int argc, char *argv[]) {
    string_calculator.Add(argv[1]);
    return 0;
}
