#include "string_calculator.h"

#include <sstream>
#include <string>

int StringCalculator::Add(std::string numbers) {
    if (numbers.empty()) {
        return 0;
    }

    std::istringstream iss(numbers);
    int result = 0;
    while (!iss.eof()) {
        int oper = 0;
        iss >> oper;

        const int kUpboundOfValidNumber = 1000;
        if (oper <= kUpboundOfValidNumber) {
            result += oper;
        }

        const int kDelimeterLength = 1;
        iss.ignore(kDelimeterLength);
    }

    output << "The result is " << result << std::endl;

    return result;
}
