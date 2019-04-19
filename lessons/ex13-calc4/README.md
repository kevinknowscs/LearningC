Calculating Complex Expressions
===============================

So far our calculator program can only perform a single operation per selection.
You want to add two numbers, it asks you for the two numbers you want to add,
adds them together, and prints the result. That's it.

There's currently no way for the calculator program to string together a longer
series of operations.

Let's take a look at how we might do that.

Imagine that we kept track of a "current result" that could be modified on successive
iterations of the main menu.

It would look like this:

```
  int current_result = 0;

  do
  {
  } while (choice != 0);
```

We'll initialize the current_result to 0 so we have a known starting value. Notice that
the initialization to zero occurs OUTSIDE the loop, so it only happens once before we
get into the guts of the program.

Let's keep the existing add, subtract, multiply, and divide operations in place. These
will be selections that DON'T modify the current result. But we'll add some new operations
that operate on the current result.

What kinds of things might we like to be able to do to the current_result:

* Set current_result to a specific value (overwrite it's previous value with a new value)
* Clear the current result
* Add a value to the current result
* Subtract a value from the current result
* Multiply the current result by a value
* Divide the current result by a value
* Modulo the current result by a value

In each case, the current_result will be set equal to the result of that particular operation.

Let's take the first three desired operations. We'll modify the main menu to support new
menu choices, and implement the menu options. Our program now looks like this:

```
int main()
{
  int current_result = 0;
  int choice, first, second;

  do
  {
    printf("Main Menu\n");
    printf("---------\n");
    printf("1. Add two numbers\n");
    printf("2. Subtract two numbers\n");
    printf("3. Multiply two numbers\n");
    printf("4. Divide two numbers\n");
    printf("5. Set the current result to a value\n");
    printf("6. Clear the current result\n");
    printf("7. Print the current result\n");
    printf("8. Add a value to the current result\n");
    printf("0. Exit the Program\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
      printf("Enter the first number: ");
      scanf("%d", &first);
      printf("Enter the second number: ");
      scanf("%d", &second);
      printf("%d + %d = %d\n", first, second, first + second);
    }
    else if (choice == 2)
    {
      printf("Enter the first number: ");
      scanf("%d", &first);
      printf("Enter the second number: ");
      scanf("%d", &second);
      printf("%d - %d = %d\n", first, second, first - second);
    }
    else if (choice == 3)
    {
      printf("Enter the first number: ");
      scanf("%d", &first);
      printf("Enter the second number: ");
      scanf("%d", &second);
      printf("%d * %d = %d\n", first, second, first * second);
    }
    else if (choice == 4)
    {
      printf("Enter the first number: ");
      scanf("%d", &first);
      printf("Enter the second number: ");
      scanf("%d", &second);
      if (second == 0)
      {
        printf("Illegal operation: Can't divide by zero\n");
      }
      else
      {
        printf("%d / %d = %d with a remainder of %d\n", first, second, first / second, first % second);
      }
    }
    else if (choice == 5)
    {
      printf("Enter the desired value: ");
      scanf("%d", &current_result);
    }
    else if (choice == 6)
    {
      current_result = 0;
      printf("Current result is now 0\n");
    }
    else if (choice == 7) 
    {
      printf("Current result is %d\n", current_result);
    }
    else if (choice == 8)
    {
      printf("What number do you want to add? ");
      scanf("%d", &first);
      current_result += first;
      printf("Current result is %d\n", current_result);
    }
  }
  while (choice != 0);
}
```

Exercise
========

Extend the calculator program to add new menu items

* Choice 9 ==> Subtract a value from current result
* Choice 10 ==> Multiply the current result by a value
* Choice 11 ==> Divide the current result by a value
* Choice 12 ==> Modulo the current result by a value

When you're done, run the program and use it to perform some longer
expressions.

Note: This calculator won't follow the algebraic PEMDAS rules. It doesn't
have support for parentheses and it will only do the operations in the
exact order you give to it. But that's okay. In future lessons we're going
to look at a way that we can perform longer operations that require us to
control the order of operations.
