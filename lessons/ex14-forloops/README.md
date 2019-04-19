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
a computer in sixth grade. If he did, he couldn't have written a computer program that
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