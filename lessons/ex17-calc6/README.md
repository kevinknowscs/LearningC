A Complete 4-Function Calculator
================================

You can see where we're going with this. Let's finish up the calculator
into a fully complete program.

As per usual for now, you'll need to use repeated blocks of similar looking
code that will violate DRY principles. That's okay. I promise we'll get around
to cleaning this up pretty soon.

Calculations on Slots
=====================

Things are a little harder for the user now. Whenever we want to add, subtract,
multiply or divide, we need to ask them three questions:

* What is the slot number of the first value
* What is the slot number of the second value
* What slot number do you want to store the result

It's not going to be very convenient, but it will work.

Adding Two Slots
================

Outside of the do/while loop, we'll declare six variables like this:

```
// Human-readable slot numbers
int first_slot, second_slot, result_slot;

// Indexes adjusted for indexing into the array
int first_index, second_index, result_index;
```

Then we'll write our menu with the operations and the if statements to perform
the calculations.

Here's what the add block will look like:

```
if (choice == /* whatever the corresponding menu item is */)
{
  printf("Enter the first slot number: ");
  scanf("%d", &first_slot);

  printf("Enter the second slot number: ");
  scanf("%d", &second_slot);

  printf("Enter the result slot number: ");
  scanf("%d", &result_slot);

  // Convert slot numbers to indexes
  first_index = first_slot - 1;
  second_index = second_slot - 1;
  result_index = result_slot - 1;

  // Add the two numbers and store the result
  results[result_index] = results[first_index] + results[second_index];
}

For division, let's make it two distinct operations, one for the dividend and
one for the remainder. So our calculator will have 5 mathematical functions.
If they want both the dividend and the remainder, they'll have to perform two
separate operations.

Exercise
========

Finish the program to make a fully functional calculator.

Run the program and compute the following equation:

```
4 + 6 * 3   12 * 4 + 7 + 5
--------- + --------------
    2              3
```

Remember the PEMDAS rules or look them up on Google if you need a refresher.
And yes, it is going to be a bit tedious. That's good - it will help develop
customer empathy.

Have fun!

Extra credit: Think about how many slots are actually needed, assuming the user
performs the order of operations in the maximally efficient way. Is 9 slots too 
many or too few?
