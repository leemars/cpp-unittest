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
        if (oper <= 1000) {
            result += oper;
        }

        iss.ignore(1);
    }

    return result;
}
