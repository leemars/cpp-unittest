#include "string_calculator_app.h"

#include <sstream>

#include "third-party/gmock/gmock.h"

TEST(StringCalculatorAppTest, CalcsStringFrom1stArgument) {
    std::ostringstream output;
    StringCalculatorApp app(output);

    int argc = 2;
    char argv1st[] = "scalc";
    char argv2nd[] = "1,2,3";
    char *argv[] = {argv1st, argv2nd};
    app.Run(argc, argv);
    
    ASSERT_EQ("The result is 6\n", output.str());
}
