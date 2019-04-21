Even More Complex Calculations
==============================

We left off our calculator program in Lesson 13 with the use of a current_result
accumulator that can be used to string together multiple operations.

That's a good start, but it's still not enough for the user to calculate a full
expression according to the algebraic PEMDAS rules that require all multiplication
and division operations be done before add and subtract.

Suppose the user needs to calculate:

```
4 * 5 + 3 * 8
```

We need to perform the two multiplication operations first, before adding, so we
get:

```

The result of 4 * 5
 |
 |   The result of 3 * 8
 |    |
 v    v
--   --
20 + 24
```

We then add the results together to get:

```
44
```

The way our calculator program is currently written, there's no way for them to do
that within the calculator itself. They would need to write at least one sub-result
down on a piece of paper, then re-enter the value when they were ready to do the
addition.

How can we provide a nicer experience for the user.

What if instead of a single current_result value, what if we gave the user a number
of slots they could use to store preliminary results. The user still has to know their
PEMDAS rules and do the calculation in the correct order, but at least we can help them
by giving them some different slots to store temporary calculations.

Note: Writing a calculator that provides full support for parentheses, and performs
all the calculations in the correct order according to algebraic PEMDAS rules is a very
advanced topic. This would usually be covered in a Compiler Construction class that would
typically be a senior-level class in a Bachelor's degree program. Later though, we're
going to learn about a way we can write the calculator program that accomplishes the same
thing but doesn't require such advanced knowledge of compilers.

For now, we're going to use the slot method and give the user a way to manually keep
track of sub-result calculations.

Let's give them an array of 9 individual slots to store calculation results. This is
initially going to make our calculator a lot harder to use, and a lot more tedious to
write, but be patient. In later lessons I'm going to show how we can make the whole thing
a very pleasant experience for the user.

First, we might want to change the number of slots later, so let's store that in a variable.

```
int num_of_slots = 9;
```

Now, we'll create an array, let's call it "results" to stay in keeping with our use of the
current_result in the previous lesson. We want the array to be of size num_of_slots, so we
declare it like this:

```
int results[num_of_slots];
```

And let's initialize all the slots to zero at the beginning, like this:

```
for (int index=0; index < num_of_slots; index++)
{
    results[index] = 0;
}
```

In human readable terms, we'll refer to these as Slot #1 through Slot #9, converting the
computer-readble and human-readable number system as I showed in the previous lesson.

Let's start with a brand new calculator program. The old calculator program has some operations
in it that don't fit very well with this new calculator.

We'll get the core scaffolding in place first.

```
#include <stdio.h>

int main()
{
  int choice;

  do
  {
    // TODO: Print Main Menu
    printf("Enter selection: ");
    scanf("%d", &choice);
  } while (choice != 0);

  return 0;
}
```

At the top of the loop, before we print the main menu, we'll print the current results array,
converting each index into a human-readable "Slot #". Adding the array declaration an initialization
to zero, we now have:

```
#include <stdio.h>

int main()
{
  int choice;
  int num_of_slots = 9;
  int results = int[num_of_slots];

  // Initialze the results array to 0
  for (int index = 0; index < num_of_slots; index++)
  {
    results[index] = 0;
  }

  do
  {
    // Print the current results to the user
    for (int index = 0; index < num_of_slots; index++)
    {
      printf("Slot #%d : %d\n", index+1, results[index]);
    }

    // TODO: Print Main Menu - As per usual from prior lessons

    printf("Enter selection: ");
    scanf("%d", &choice);
  } while (choice != 0);

  return 0;
}
```

Exercise
========

Continue fleshing out the new calculator program with the following menu options:

1. Clear all results
2. Clear a slot
3. Enter a value into a slot
4. Copy a value to another slot

Clear all results
-----------------

Here you'll use a loop that looks just like the initialization loop at the top of the program.

Clear a Slot
------------

Here you'll need to ask the user what slot number they want to clear and set the appropriate
index to zero. Remember to handle converting to-and-from human-readable numberings. When they
enter the number, they'll be entering the slot in 1-based terms. You'll need to subtract 1 from
the value they enter to convert it to 0-based terms.

Enter a Value into a Slot
-------------------------

Ask them for the slot number and the value that should go in that slot. Set the appropriate
result slot with the value they entered.

Copy a Value to Another Slot
----------------------------

Here you'll prompt them for two slot numbers and copy the value appropriately.
