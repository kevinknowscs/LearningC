
Conditional Pathways
====================

Sometimes we need to have our code do one thing under one set of conditions,
and a different thing under a different set of conditions.

For example, imagine writing a program that calculates your taxes. If you make
less than a certain amount of money, then you owe money based on one formula,
but if you make more than that you owe money based on a different formula.

In C programs, these situations are easily dealt with using an if statement.

The basic structure of an if statement looks like this:

```
if (condition)
{
  // Your code here
}
```

The type of condition that you can put inside the parentheses in the if statement
can be as simple or as complex as you want them to be. In another lesson, we'll learn how
to combine multiple coditions together into one big condition.

For now though, we're going to focus on only a few basic conditions.

```
Condition Structure        Description
if (value1 == value2)      Your code is executed if value1 is equal to value2
if (value1 != value2)      Your code is executed if value1 does not equal value2
if (value1 > value2)       Your code is executed if value1 is greater than value2
if (value2 < value2)       Your code is executed if value1 is less than value2
```

I've left off many other conditions that C offers, but these are enough to start 
writing interesting programs.

Else Clauses
============

What if we want to do something if the condition of the if statement is NOT true.
In that case, we can add an else clause to our if statement, like so:

```
if (condition)
{
  // This code is executed if the condition is true
}
else
{
  // This code is executed if the condition is not true
}
```

If Statements in Action
=======================

Here's a simple fun program. The program asks the user how much money they make. If
they make enough money, the program assures them they can live in Silicon Valley. 
Otherwise, the program suggests the user move to Minnesota.

```
#include <stdio.h>

int main()
{
  int income;

  printf("What is your annual income? ");
  scanf("%d", &income);

  if (income > 500000)
  {
    printf("Congratulations. You make enough money to live in Silicon Valley.\n");
  }
  else
  {
    printf("Hmmm. I hear home prices in Minnesota might be more affordable for you.\n");
  }

  return 0;
}
```

Exercise
========

TODO: Think of a good exercise
