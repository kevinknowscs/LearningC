Dealing with Arbitrarily Sized Data
===================================

Imagine that we're asked to write a program that prints the average score for
a class of students.

Further suppose that we know in advance that there are 5 students in the class.
If we know in advance how many students there are, we could write code that looked
something like this:

```
#include <stdio.h>

int main()
{
  int total_score = 0;
  int score1, score2, score3, score4, score5;

  printf("Enter score 1: ");
  scanf("%d", &score1);
  total_score += score1;

  printf("Enter score 2: ");
  scanf("%d", &score2);
  total_score += score2;

  printf("Enter score 3: ");
  scanf("%d", &score3);
  total_score += score3;

  printf("Enter score 4: ");
  scanf("%d", &score4);
  total_score += score4;

  printf("Enter score 5: ");
  scanf("%d", &score5);
  total_score += score5;

  // Calculate and print the average score
}
```

We can see right away that this code is problematic.

First, we're duplicating nearly identical code five times. In software circles this
violates a principle called DRY - Don't Repeat Yourself. We'll learn more about writing
nice, clean, DRY code in future lessons.

It's also extremely tedious to write code that looks like that. In a small example like
this with only 5 students it's not so bad, but imagine there were a hundred students. Or
a thousand. Or imagine that you're Facebook and you have 3 billion users. Code like that
is obviously just not going to work.

What happens if we find a bug in the code? We've duplicated the bug multiple times and now
we have to go fix the bug in every place where we used that code snippet.

What happens if the requirements change? Suppose next semester there are 7 students in the
class. Now you have to rewrite and recompile a new version of your software. That's not going
to be very much fun for you.

Those are all really good reasons not to write code like that.

But there's an even bigger reason not to write code like that ... what happens if you DON'T KNOW
in advance how many students there are? Then there's just no way to write the program if we have
to repeat a code block a fixed number of times.

The ability to deal with an unknown-in-advance, arbitrarily sized amount of data is paramount
in the fundamentals of computer science. 

To execute a code block an arbitrary number of times, without repeating the code itself, we use a loop. C
provides three fundamental loops: a for loop, a while loop, and a do/while loop, as well as 
a more flexible but unnecessary goto statement that can be used to manually create loops in
the code.

To store the same type of data of an arbitrary size, we can use arrays.

We'll be studying loops and arrays a bit more over the next few lessons. This lesson is just
an overview of the concepts.

Rewriting Using For Loops and Arrays
====================================

Here's what it would look like if I rewrote the above code using for loops and an array.
Don't worry about the details for now. Just take in the structure of the code and see if
it makes some intuitive sense.

```
#include <stdio.h>

int main()
{
  int num_of_students = 5;
  int total_score = 0;
  int scores[num_of_students];

  for (int index=0; index < num_of_students; index++)
  {
    printf("Enter score %d: ", index + 1);
    scanf("%d", &scores[index]);
    total_score += scores[index];
  }

  // Calculate and print the average score
}
```

The line beginning with "for" in the above code is a for loop. It will execute the code
block inside of it 5 times, keeping track of the iteration number using a control variable
named index.

Execution of the loop looks like this:

```
Description                    index  Post Loop Action             Exit Condition Check
----------------------------   -----  --------------------------   ------------------------------------
First time through the loop    0      index++ ==> index is now 1   index < 5 is true, continue looping
Second time through the loop   1      index++ ==> index is now 2   index < 5 is true, continue looping
Third time through the loop    2      index++ ==> index is now 3   index < 5 is true, continue looping
Fourth time through the loop   3      index++ ==> index is now 4   index < 5 is true, continue looping
Fifth time through the loop    4      index++ ==> index is now 5   index < 5 is false, exit the loop
```

The line:

```
int scores[num_of_students];
```

declares an array. An array is a block of memory that can store N copies of the same type of
thing, in this case an int.

Since we declared num_of_students = 5 two lines above it, the computer will create a place in memory
for us to store 5 integers. If we increased the value of num_of_students to let's say 20 before we
created the array, the computer would create space for 20 integers.

We can access the value of a particular slot in the array using the square brackets with an index number.
In C, arrays are indexed starting at 0. That means ```scores[0]``` will give us the first item in the
array, ```scores[1]``` will give us the second item in the array, etc.

Notice that since the index starts at 0, the last index in the array is N - 1, where N is the size of
the array.

Summary
=======

We use loops to repeated execute a block of code.

We use arrays to store data that is repeated a number of times.

Exercise
========

What C structure (a loop or an array) would you use in the following circumstances:

* Your code needs to compute the sum of a certain number of values the user enters
* You need to store all the prime numbers between 2 and 101 so your program can use them later
* You need to broadcast all the prime numbers between 2 and 101 in an attempt to make intergalactic
  contact with another civilization
* You need to read and print each line of a file in a text file located on the computer

