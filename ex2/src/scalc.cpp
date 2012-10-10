#include <iostream>

#include "string_calculator_app.h"

int main(int argc, char *argv[]) {
    StringCalculatorApp app(std::cin, std::cout);
    return app.Run(argc, argv);
}
