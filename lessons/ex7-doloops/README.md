Loops
=====

Sometimes we want to have some part of our code to execute more than once.
For example, imagine that we're reading in a series of student test scores
from a file. We need to have some code that executes each time we read in
another test score.

In programming languages, this is done with loops.

C provides three different types of loops:

* for loops
* while loops
* do/while loops

In this lesson we're going to focus on the do/while loop. This is probably
the least frequently used type of loop in C, but we're going to study the 
do/while loop first because we're going to need it to write menu-driven programs
that we cover in the next lesson.

The basic structure of the do/while loop looks like this:

```
do
{
  // Your code here
} while (condition);
```

For the condition part of the loop, you can put in the same kind of conditional
expressions that you learned about in the last lesson.

Sample: Summing a Series of Numbers
===================================

Suppose we want to write a program that asks the user to enter an arbitrary number
of values. When the user enters 0, we want to exit the loop and print the sum.

Here's a simple program that will do that:

```
#include <stdio.h>

int main()
{
  int sum = 0, number;

  do
  {
    printf("Enter a number or 0 to exit: ");
    scanf("%d", &number);
    sum += number;
  } while (number != 0);

  printf("The sum of the numbers you entered is %d\n", sum);
}
```

Exercise
========

Write a program, similar to the above, that asks the user to enter a series of values,
and then prints the sum of the numbers entered, and a count of the total number of
values that the user entered. The count should include the final 0 that the user entered
to exit the loop.

Sample output:

```
Enter a number or 0 to exit: 10
Enter a number or 0 to exit: 12
Enter a number or 0 to exit: 14
Enter a number or 0 to exit: 0
The sum of the numbers you entered is 36
You entered 4 numbers (including the final 0)
```
