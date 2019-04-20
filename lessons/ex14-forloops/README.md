Introduction to For Loops
=========================

As we saw in Lesson 12, a for loop is one of the ways that C gives us to
repeatedly execute a block of code.

You've already seen a for loop in an informal way. In this lesson we'll
formally introduce the syntax of a for loop.

For Loop
========

A for loop is generally used when we want the loop to give us a "control variable"
that tells us which iteration we're at in the loop.

Here's what it would look like if I wanted a for loop to execute 10 times, with
a control variable named "index" that marches it's way from 1 up to and including
10.

```
    We declare a variable INSIDE the structure of the loop.
    The variable will only be accessible within the body of
    the loop.
      |
      |  This is the name of
      |  the control variable
      |    |
      |    |    This is the exit condition that
      |    |    is evaluated at THE END of the loop.
      |    |    As long as this condition is true,
      |    |    the loop will continue on to the next
      |    |    iteration.
      |    |         |
      |    |         |       This is the post-loop action that
      |    |         |       modifies the control variable, thereby
      |    |         |       preparing it for the next iteration
      |    |         |          |
      |    |         |          |
      v    v         v          v
     --- -----  -----------  -------
for (int index; index <= 10; index++)
{
  // Your code here
}
```

C is a very flexible language. Sometimes too flexible. It gives a lot of options for
how to structure your code that can sometimes be overwhelming for a beginner programmer.

The for loop in C can be structured in many ways that we're not going to worry about right
now, including:

* You can declare more than one control variable
* You can declare a control variable OUTSIDE of the loop, so that it can be used
  after the loop has finished
* The condition can include as many checks of things and even use variables other than
  the control variable
* The post-loop action can do anything. It doesn't have to be confined to only incrementing
  the loop's control variable
* You aren't confined to merely incrementing or decrementing the control variable. For
  example, you could increment the control variable by 10 each time through the loop.

Because all of that can be too daunting to take in all at once, we're not going to be doing
any of those fancy or tricky things. The for loop as I've presented it is how it is used
in practice in the vast majority of programming situations.

Therefore, we will confine our usage of the for loop as follows:

* We will always declare the control variable INSIDE the loop, as I've shown above. We will
  never use a control variable declared outside of the for loop structure.
* We will always use ONE integer control variable. We won't use multiple control variables.
* The exit condition will generally be kept as simple as possible and will generally be
  confined to checking the control variable against the maximum upper bound
* In the post loop action, we'll always either increment or decrement the control variable by 1.
  We won't mix different control variables together. It gets too confusing to do that.

For Loops in Action
===================

Let's look at a very simple for loop. Suppose, purely hypothetically speaking of course,
that you've locked your sixth grade teacher's purse in her own safe. She can't remember
the combination to her own safe, so she calls the janitor to have it torched open. Oops.

As punishment, you have to write 1000 paragraphs that say:

```
I will not lock my teacher's purse in the safe. It was wrong of me to do that. Touching
other people's things is a violation of privacy and I promise to never do it again.
I'm very sorry for what I did wrong.
```

Well, let's face it, that's a lot of writing. Too bad our hapless malcontent didn't have
a computer in sixth grade. If he did, he could have written a computer program that
looked like this.

```
for (int index=1; index <= 1000; index++)
{
  printf("%d. I will not lock my teacher's purse in the safe. It was wrong of me to do that. Touching\n", index);
  printf("other people's things is a violation of privacy and I promise to never do it again.\n");
  printf("I'm very sorry for what I did wrong.\n");
  printf("\n");
}
```

This will output:

```
1. I will not lock my teacher's purse in the safe. It was wrong of me to do that. Touching
other people's things is a violation of privacy and I promise to never do it again.
I'm very sorry for what I did wrong.

2. I will not lock my teacher's purse in the safe. It was wrong of me to do that. Touching
other people's things is a violation of privacy and I promise to never do it again.
I'm very sorry for what I did wrong.

3. I will not lock my teacher's purse in the safe. It was wrong of me to do that. Touching
other people's things is a violation of privacy and I promise to never do it again.
I'm very sorry for what I did wrong.

4. I will not lock my teacher's purse in the safe. It was wrong of me to do that. Touching
other people's things is a violation of privacy and I promise to never do it again.
I'm very sorry for what I did wrong.

.
. Etc up to 1000
.
```

Notice that I use the control variable in the first line of the paragraph when I print
1., 2., 3., etc. You're not required to use the control variable inside of the loop, but
frequently the code you're writing needs to know the current value of the control variable.

Zero-Based or One-Based Loops
=============================

The loop that I showed above is 1-based, meaning I start the initial index value at 1.
Or course I could start the index at ANY value I choose, but the two most commonly used
initial values are 0 and 1.

In C programming, it's more common to see a 0-based loop than a 1-based loop. This is because
arrays in C are 0-based (meaning, the first item is at array[0]). Other languages such as
BASIC use 1-based arrays, but C, and most other languages that are inspired by C use 0-based
arrays.

Because arrays are 0-based, programmers tend to make their loops 0-based so that it matches
how arrays work. It's just a more consistent mental experience and that's what programmers
tend to do. That doesn't mean there aren't cases where it makes more sense to start your loop
at 1, but you'll usually see loops that start at 0 more often than you see loops that start at 1.

Counting from 1 to 10 with a 1-based Loop
-----------------------------------------

Here's a program that prints the numbers 1 to 10 using a 1-based loop.

```
for (int x=1; x <= 10; x++) 
{
  printf("%d\n", x);
}
```

Notice that since with start and 1, and we want to count up to AND INCLUDING 10, that means
our exit condition needs to include 10. Therefore we use the "less than or equal to condition":

```
x <= 10;
```

That means when x gets to 10, the exit condition test, x <= 10 will still be true (because x
is equal to 10), and the loop will go through the code for the case of x = 10.

But imagine that we made a mistake in our code and instead we wrote:

```
x < 10;
```

Then our program would only go through 9, because when x got up to 10, the exit condition test
for x < 10 would be false (because x is equal to 10, not less than 10), and the loop would exit
and we would miss the last number that we wanted to print.

Counting from 1 to 10 with a 0-based Loop
-----------------------------------------

We can do the exact same thing as above using a 0-based loop. Here's what it looks like:

```
for (int x=0; x < 10; x++)
{
  printf("%d\n", x + 1);
}
```

Notice how I've now changed my exit condition to:

```
x < 10;
```

That's because since I started the loop at 0, I now DON'T WANT it to go through the loop for
the case of x = 10. If I made the exit condition be x < = 10, then the loop would actually
execute 11 times, not 10 (0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 is eleven times).

So the loop I wrote above will execute for the control variable going from x = 0 the first
time through the loop, up to x = 9 on the last time through the loop. That means the loop
will execute 10 times (0, 1, 2, 3, 4, 5, 6, 7, 8, 9) which is what I want in this case.

But wait, I want to print numbers 1 to 10, not 0 through 9. So to fix that, I just change what
I print in the printf statement. I just add one to it. I'm getting the control variable going
from 0 to 9, but I'm adding 1 to it each time I print it, so what I'm actually printing is
1 to 10. Doing these kinds of minor transformations inside your loop is quite common.

Off By One Errors
=================

Programmers are human; they make mistakes too. It's easy to get your loops wrong by starting
it at 0 when you should have started it at 1, or by making your exit condition by less than
or equal when you should have made it just less than. The result is you have a bug in your 
program and the loop either executes one too few times, or one too many times.

This type of mistake is so common that it actually has a name. It's called an "off by one error".

Naming of Control Variables
===========================

What should you name your control variable?

Programmers usually like to use very short names for their control variables, with x, y,
and z being some of the most commonly used control variable names in a for loop. The control
variable often has no particular meaning other than to indicate the interation number through the loop,
so there's no reason to try to think of a more meaningful name for it. If your control variable
DOES have some particular meaning in the context of your program, then feel free to name it as such.

The name "index" is another common choice for a control variable name. This can be a good choice
if you are using your loop control variable to access some corresponding array elements. Since
the access into the array is an index, it makes sense to name your loop control variable "index".

Exercise
========

Write TWO programs that counts from 1 to 50 and prints out the number and the square of
each number.

For the first program use a 0-based loop. For the second program use a 1-based loop.

Sample Output:

```
1 : 1
2 : 4
3 : 9
4 : 16
.
. Etc
.
50 : 2500
```

Note: You can compute the square of a number simply by multiplying it by itself.
