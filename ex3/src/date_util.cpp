#include "date_util.h"

bool DateUtil::IsLeapYear(int year) {
    if (year % 4 != 0) {
        return false;
    }
    return true;
}
