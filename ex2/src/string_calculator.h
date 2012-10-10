#ifndef EX2_STRING_CALCULATOR_H
#define EX2_STRING_CALCULATOR_H

#include <ostream>
#include <string>

class StringCalculator {
public:
    StringCalculator(std::ostream &output) : output(output) {}

    int Add(std::string numbers);

private:
    std::ostream &output;
};

#endif
