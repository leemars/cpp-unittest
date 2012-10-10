#include "string_calculator.h"

#include <iostream>
#include <sstream>

#include "third-party/gmock/gmock.h"

class StringCalculatorTest : public ::testing::Test {
public:
    StringCalculatorTest() : null_output(), string_calculator(null_output) {}

protected:
    std::ostringstream null_output;
    StringCalculator string_calculator;
};

TEST_F(StringCalculatorTest, TakesZeroNumbers) {
    ASSERT_EQ(0, string_calculator.Add(""));
}

TEST_F(StringCalculatorTest, TakesOneNumber) {
    ASSERT_EQ(1, string_calculator.Add("1"));
}

TEST_F(StringCalculatorTest, TakesTwoNumbers) {
    ASSERT_EQ(3, string_calculator.Add("1,2"));
}

TEST_F(StringCalculatorTest, TakesUnknownAmountOfNumbers) {
    ASSERT_EQ(15, string_calculator.Add("1,2,3,4,5"));
}

TEST_F(StringCalculatorTest, HandlesNewLinesBetweenNumbers) {
    ASSERT_EQ(6, string_calculator.Add("1\n2,3"));
}

TEST_F(StringCalculatorTest, IgnoresNumbersBiggerThan1000) {
    ASSERT_EQ(6, string_calculator.Add("1\n2,1001,3"));
}

TEST(StringCalculatorConstructTest, ConstructsWithCout) {
    StringCalculator string_calculator(std::cout);
}

TEST(StringCalculatorOutputTest, OutputsResultWithFakeConsole) {
    std::ostringstream output;
    StringCalculator string_calculator(output);

    ASSERT_EQ(6, string_calculator.Add("1,2,3"));
    ASSERT_EQ("The result is 6\n", output.str());
}
