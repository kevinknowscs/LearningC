More Operations for the Calculator
==================================

Now that we've learned a few more mathematical operations, we can
return to our calculator program that we started in Lesson 6 and
continue extending it.

Adding Subtraction to the Calculator
====================================

From Exercise 9, you should have some code that looks like this:

```
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
    else if (choice == 2)
    {
      printf("Sorry, I don't know how to do that yet\n");
    }
    else if (choice == 3)
    {
      printf("Sorry, I don't know how to do that yet\n");
    }
    else if (choice == 4)
    {
      printf("Sorry, I don't know how to do that yet\n");
    }
  }
  while (choice != 0);
}
```

To extend the calculator to support subtracting two numbers, we add a new
choice to the menu, and a new block of code to perform the operation. Our
code now looks likeL

```
int main()
{
  int choice, first, second;

  do
  {
    printf("Main Menu\n");
    printf("---------\n");
    printf("1. Add two numbers\n");
    printf("2. Subtract two numbers\n");
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
      printf("Sorry, I don't know how to do that yet\n");
    }
    else if (choice == 4)
    {
      printf("Sorry, I don't know how to do that yet\n");
    }
  }
  while (choice != 0);
}
```

If you're an astute student you will have noticed right away that I've repeated some
nearly identical looking code and I might be in danger of a DRY violation.

You'd be absolutely right. But I don't want you to worry about that right now. We'll
come back to this problem in future lessons and look at ways that we could refactor
our code to be more efficient.

Exercise
========

Add two more code blocks similar to above to support multiplication and division.

For division, your code should check for a division by zero condition (using an if statement)
and print BOTH the division and the remainder.

Use repetitive code blocks for prompting for user input, as I've shown above.

Expected output:

```
Main Menu
---------
1. Add two numbers
2. Subtract two numbers
3. Multiply two numbers
4. Divide two numbers
0. Exit the program
Enter your choice: 3
Enter the first number: 9
Enter the second number: 7
9 * 7 = 63
(Main Menu displays again)
Enter your choice: 4
Enter the first number: 9
Enter the second number: 0
Illegal operation: Can't divide by 0
(Main Menu displays again)
Enter your choice: 4
Enter the first number: 9
Enter the second number: 4
9 / 4 = 2 with a remainder of 1
... etc ...
```
