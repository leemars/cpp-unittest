#include <iostream>

#include "string_calculator_app.h"

int main(int argc, char *argv[]) {
    StringCalculatorApp app(std::cout);
    return app.Run(argc, argv);
}
