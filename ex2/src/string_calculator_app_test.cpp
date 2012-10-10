#include "string_calculator_app.h"

#include <sstream>

#include "third-party/gmock/gmock.h"

TEST(StringCalculatorAppTest, CalcsStringFrom1stArgument) {
    std::istringstream input;
    std::ostringstream output;
    StringCalculatorApp app(input, output);

    int argc = 2;
    char argv1st[] = "scalc";
    char argv2nd[] = "1,2,3";
    char *argv[] = {argv1st, argv2nd};
    app.Run(argc, argv);
    
    ASSERT_EQ("The result is 6\n", output.str());
}

TEST(StringCalculatorAppTest, CalcsStringFromUserInput) {
    std::stringstream input;
    std::ostringstream output;
    StringCalculatorApp app(input, output);

    int argc = 2;
    char argv1st[] = "scalc";
    char argv2nd[] = "1,2,3";
    char *argv[] = {argv1st, argv2nd};
    input << "1,2,3,4\n1,2,3,4,5\n\n";
    app.Run(argc, argv);

    ASSERT_EQ("The result is 6\nThe result is 10\nThe result is 15\n", output.str());

}
