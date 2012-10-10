cpp-unittest
============

TDD Kata 1 : String Calculator
------------------------------

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

TDD Kata 2 - Interactions
-------------------------

From: http://osherove.com/tdd-kata-2/

Add the following features to String Calculator (either in the same class, or using any other structure or design you’d like).

1. Everytime you call Add(string) it also outputs the number result of the calculation in a new line to the terminal or console. (remember to try and do this test first!)
2. Create a program (test first)that uses string calculator, which the user can invoke through the terminal/console by calling “scalc ‘1,2,3’” and will output the following line before exiting: “The result is 6”
3. Instead of exiting after the first result, the program will ask the user for “another input please” and print the result of the new user input out as well, until the user gives no input and just preses enter. in that case it will exit.
