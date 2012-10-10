#include "string_calculator.h"

#include "third-party/gmock/gmock.h"

class StringCalculatorTest : public ::testing::Test {
protected:
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
