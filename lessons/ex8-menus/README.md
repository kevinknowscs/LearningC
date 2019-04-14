Writing a Menu-Driven Program
=============================

Usually we want our programs to interact with the user in some way.

With modern technology we have fancy graphics, mice, joysticks, touchpads
and all sorts of things that we can use to build fun, highly engaging,
interactive applications.

But put yourself in a mental time machine and travel back to 1978. Those
things didn't exist. All that existed back then were text-based terminals,
and about all you could do to interact with the user is prompt them for
some input and read in the keyboard input they type in.

Although perhaps not quite as fun as a modern iPad application, terminal-based
applications were, and still are, a viable way to write a useful program.

In this lesson we'll explore the idea of a menu-driven program. In a menu-driven
program, we'll repeatedly as the user to pick from a list of options to do something.
We'll do the thing they ask us to do. Then we'll return to the top and repeat the
whole thing. We'll exit the program when they choose a special value to exit.

Since we need to do this repeatedly, we need to put the code inside of a loop.
The C do/while loop is a great choice for writing a menu-driven application.

We can use the if statement to decide what action to take.

Here's what it might look like:

```
#include <stdio.h>

int main()
{
  int choice;

  do
  {
    printf("Main Menu\n");
    printf("---------\n");
    printf("1. Say a Mark Twain quote\n");
    printf("2. Say an Albert Einstein quote\n");
    printf("3. Say a Benjamin Franklin quote\n");
    printf("\n");
    printf("0. Exit the program\n");
    printf("\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
      printf("Reports of my death have been over exaggerated.\n");
    }
    else if (choice == 2)
    {
      printf("Look deep into nature, and then you will understand everything better\n");
    }
    else if (choice == 3)
    {
      printf("Three may keep a secret, if two of them are dead\n");
    }
  } while (choice != 0);
}
```

The Else If Clause
==================

Notice the use of the "else if" clause of the if statement. In lesson 6 we covered the else clause, but we
didn't cover the else if clause. The else if clauses of an if statement are executed in the order they
appear in the code.

In the above example, if choice is equal to 1, it executes the first branch of the if statement. If choice
is not equal to 1, it then goes to the next clause and checks if choice is equal to 2. If it's not equal
to 2, it goes to the next else if clause and checks to see if choice is equal to 3. Etc.

Exercise
========

Extend the above exercise to add at least two more menu options to print quotes
from your favorite historical figure or philosopher.
