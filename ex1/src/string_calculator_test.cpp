#include "string_calculator.h"

#include "third-party/gmock/gmock.h"

class StringCalculatorTest : public ::testing::Test {
protected:
    StringCalculator string_calculator;
};

TEST_F(StringCalculatorTest, DoNothing) {
}
