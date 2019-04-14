A Menu-Driven Calculator Program
================================

Now that we've learned the basic structure of a menu-driven application,
we can apply that method to start building a calculator program that can
perform different types of operations.

Here's what it might look like:

```
#include <stdio.h>

int main()
{
  int choice, first, second;

  do
  {
    printf("Main Menu\n");
    printf("---------\n");
    printf("1. Add two numbers\n");
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
  }
  while (choice != 0);
}
```

Exercise
========

Extend the above menu options to include choices for subtracting,
multiplying, and dividing two numbers. Since we haven't yet learned
how to perform those operations, the program should simply say
"Sorry. I don't know how to do that yet."

Sample Output:

```
Main Menu
---------
1. Add two numbers
2. Subtract two numbers
3. Multiply two numbers
4. Divide two numbers

0. Exit the Program
Enter your choice: 2
Sorry. I don't know how to do that yet.
(main menu display again and the process repeats)
```
