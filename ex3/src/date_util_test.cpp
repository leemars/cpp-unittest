#include "date_util.h"

#include "third-party/gmock/gmock.h"

TEST(DateUtilTest, TypicalCommonYearIsNotDivisibleBy4) {
    DateUtil util;
    ASSERT_FALSE(util.IsLeapYear(2001));
}

TEST(DateUtilTest, TypicalLeapYearIsDivisibleBy4ButNotDivisibleBy100) {
    DateUtil util;
    ASSERT_TRUE(util.IsLeapYear(1996));
}
