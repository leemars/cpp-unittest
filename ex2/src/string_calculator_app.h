#ifndef EX2_STRING_CALCULATOR_APP
#define EX2_STRING_CALCULATOR_APP

#include <istream>
#include <ostream>

#include "string_calculator.h"

class StringCalculatorApp {
public:
    StringCalculatorApp(std::istream &input, std::ostream &output) : input(input), string_calculator(output) {}

    int Run(int argc, char *argv[]);

private:
    std::istream &input;
    StringCalculator string_calculator;
};

#endif
