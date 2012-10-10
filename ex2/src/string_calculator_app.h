#ifndef EX2_STRING_CALCULATOR_APP
#define EX2_STRING_CALCULATOR_APP

#include <ostream>

#include "string_calculator.h"

class StringCalculatorApp {
public:
    StringCalculatorApp(std::ostream &output) : string_calculator(output) {}

    int Run(int argc, char *argv[]);

private:
    StringCalculator string_calculator;
};

#endif
