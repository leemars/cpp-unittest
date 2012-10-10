#include "string_calculator.h"

#include <sstream>
#include <string>

int StringCalculator::Add(std::string numbers) {
    if (numbers.empty()) {
        return 0;
    }

    std::istringstream iss(numbers);

    int result = 0;
    iss >> result;

    char delim;
    iss >> delim;

    int oper = 0;
    iss >> oper;
    result += oper;

    return result;
}
