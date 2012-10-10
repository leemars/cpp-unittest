#include "string_calculator_app.h"

#include <sstream>
#include <string>
#include <vector>

#include "third-party/gmock/gmock.h"

class StringCalculatorAppTest : public ::testing::Test {
public:
    StringCalculatorAppTest() : app(input, output) {}

    ~StringCalculatorAppTest() {
        for (std::vector<char *>::iterator iter = args.begin(); iter != args.end(); ++iter) {
            delete *iter;
        }
    }

    void AddArg(const char *arg) {
        char *buffer = new char[strlen(arg) + 1];
        strcpy(buffer, arg);
        args.push_back(buffer);
    }

    void Run() {
        app.Run(args.size(), &args[0]);
    }

protected:
    std::stringstream input;
    std::stringstream output;
    StringCalculatorApp app;
    std::vector<char *> args;
};

TEST_F(StringCalculatorAppTest, CalcsStringFrom1stArgument) {
    AddArg("scalc");
    AddArg("1,2,3");
    Run();
    ASSERT_EQ("The result is 6\n", output.str());
}

TEST_F(StringCalculatorAppTest, CalcsStringFromUserInput) {
    AddArg("scalc");
    AddArg("1,2,3");
    input << "1,2,3,4" << std::endl
        << "1,2,3,4,5" << std::endl
        << std::endl;
    Run();
    ASSERT_EQ("The result is 6\nThe result is 10\nThe result is 15\n", output.str());
}
