Writing a Calculator Program
============================

In this lesson we'll begin one of the projects we'll be working
on through these series of lessons - to write an interactive
calculator program.

Eventually the calculator program will do all sorts of interesting
mathematical operations for the user, but we're going to start with
a very simple program - a program that will add two numbers the user
enters.

You already know everything you need to write this program:

* You've learned how to declare variables
* You've learned how to add variables
* You've learned how to read input from the user
* You've learned how to print numbers using printf and %d

Let's put it all together into an actual program.

Printing Multiple Numbers with Printf
=====================================

You can place more than one %d in your format specifier, such as:

```
        The first parameter goes to the first %d
        +-----------------------------------+
        |                                   | Third parameter, third %d
        |                      +------------|-----+
        |                      |            |     |
        v                      v            |     |
printf("%d potato, %d potato, %d potato\n", 1, 2, 3);
                    ^                          |
                    |                          |
                    +--------------------------+
                    The second parameter goes to
                    the second %d
```

This will print:

```
1 potato, 2 potato, 3 potato
```

Here's another example:

```
int month = 2;
int day = 22;
int year 1732;

printf("George Washington was born %d/%d in %d\n", month, day, year);
```

This wil print:

```
George Washington was born 2/22 in 1732
```

Procedure
=========

To write the program below, you should have 5 lines of code inside your main function.

* Print "Enter your first number: " (don't put the \n in there - leaving the cursor on the same line)
* Use scanf to read in the first number to a variable
* Print "Enter your second number: " (again, no \n)
* Use scanf to read in the second number to a variable
* Print the full equation using a printf with 3 %d's in the format specifier

Exercise
========

Write a program that prompts the user for two numbers, then prints
out the two numbers along with their some:

Expected ouptut:

```
Enter your first number: 5
Enter your second number: 6
5 + 6 = 11
```
