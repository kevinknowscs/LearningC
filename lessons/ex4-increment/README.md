Incrementing the Value of a Variable
====================================

Sometimes we want to increase the existing value of a variable by a specific amount. This can
be done in multiple ways.

First, we can use an ordinary assignment expression, as we did in the previous lesson, but using 
the variable on both sides of the "=" operator.

  x = x + 20;  // the new value of x will be equal to the old value of x plus 20

For a shortened version of the above, we can use the "+=" operator.

  x += 20;     // the value of x will be increased by 20

For an even shorter method, if we need to increment the variable by 1, we can use the "++" operator.

  x++;         // the value of x will be increased by 1

Exercise
========

Write a program that initializes three variables named a, b, and c, with their intial
values set to 20, 30, and 40, respectively.

Print the three values with along with the name of the corresponding variable.

Increment a by 30 using an assignement statement (do not use the += operator).
Increment b by 40 using the += operator.
Increment c by 1 using the ++ operator.

Print all three values and variable names again.

Sample Output
=============

The OUTPUT of your program should look like:

a = 20
b = 30
c = 40
a = 50
b = 70
c = 41
