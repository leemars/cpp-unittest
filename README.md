cpp-unittest
============

TDD Kata 1 : String Calculator
---------------------------

From: http://osherove.com/tdd-kata-1/

1. Create a simple String calculator with a method int Add(string numbers)
    1. The method can take 0, 1 or 2 numbers, and will return their sum (for an empty string it will return 0) for example “” or “1” or “1,2”
    2. Start with the simplest test case of an empty string and move to 1 and two numbers
    3. Remember to solve things as simply as possible so that you force yourself to write tests you did not think about
    4. Remember to refactor after each passing testt 
2. Allow the Add method to handle an unknown amount of numbers
3. Allow the Add method to handle new lines between numbers (instead of commas).
    1. the following input is ok:  “1\n2,3”  (will equal 6)
    2. the following input is NOT ok:  “1,\n” (not need to prove it - just clarifying)
4. Numbers bigger than 1000 should be ignored, so adding 2 + 1001  = 2