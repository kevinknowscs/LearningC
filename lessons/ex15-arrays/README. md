Introduction to Arrays
======================

As we've already seen, arrays are a way that we can store an arbitrary number
of the same type of thing.

The computer does this by creating a contiguous block of memory. The total size
of that block of memory is equal to the size of the thing the array holds, 
multiplied by the number of items you asked for.

So for example, since ordinary integers (an int) on a modern 64-bit operating system
is 4 bytes long, if we want an array of 20 integers, the computer will create a 
block of memory that is 80 bytes long.

Think of each item in the array as a "slot" to put a value. The position of the
slot we call the index. In C, we number the first slot at 0. The last index in the
array is N - 1, where N is the size. Because we start number at 0 instead of 1, that
means we stop numbering at N - 1, not N.

This can all be a little bit confusing because we humans like to think of a sequence
of things starting with the number 1, and computers like to think of the first thing
as number 0. Remember those off-by-one errors I told you about earlier. Well, this is
one of the reasons why such things happen.

For that reason, I'm going to adopt the following convention:

* When I refer to an array value specifically by its index, I will always use
  a 0-based counting method. I will always use the word "index" to be clear that
  that is the numbering method I'm using
* When I want to use a humanized, 1-based system, I will always spell it out in words
  such as "first", "second", "third", and "last".
* I will always use capital N to assume that we are talking about the size of the
  array  

Let's see how that convention works out. I can say:

* The first thing in the array is at index 0
* The second thing in the array is at index 1
* The value at index 10 is the eleventh item in the array
* The last thing in the array is at index N - 1

Visually we can think of the array like this:

```
+------------------+                               \
| value            |  <--- index = 0, first item    \  
+------------------+                                 |
| value            |  <--- index = 1, second item    |
+------------------+                                 |
| value            |  <--- index = 2, third item      \  A contiguous block of memory of N items,
+------------------+                                  /  requring a total (size-of-item) * N bytes
        .                                            |   of storage
        .                                            |
        .                                            |
+------------------+                                 |
| value            |  <--- index = N-1, last item   /
+------------------+                               /
```

Declaring an Arrays
===================

Just like we need to declare variables before we use them in C, we also need to
declare our arrays before we use them. We can declare and array and specify its size
like this:

```
int student_scores[10]; // Creates 4 * 10 = 40 bytes of contiguous storage in memory
```

Setting and Using Array Values
==============================

Once we've created an array, we can reference a value at a particular index using square
brackets and an index number, like this:

```
student_scores[0] = 90; // Set the value at index 0 (the first item)
student_scores[1] = 78; // Set the value at index 1 (the second item)
```

We can use and array with its indexed value anywhere in an expression where we might use
and ordinary variable.

```
total_score += student_scores[0]; // Add the first student score to the total
printf("The score of the first student is %d\n", student_scores[0]);
```

Using Another Variable to Declare an Array Size
===============================================

One of the big benefits of using an array vs. ordinary variables is that we don't need
to know the size of the array when we write the program. We can use information that we
obtain at runtime to set the size of the array.

Here's an example of something we can do:

```
int num_of_students;
printf("How many students are in your class? ");
scanf("%d", &num_of_students);
int student_scores[num_of_students];
```

I now have an array that is exactly as big as I need it to be, and I don't need to know
how big it is when I write the program. Now I can sell my program to school districts all
over the world and become a millionaire, without needing to write a special program for 
each individual teacher. Hooray.

Accessing an Array Index with Another Variable
==============================================

I don't need to use a hard-coded value to specify an index. I can use another variable, or
even an expression if I want to.

```
int current_student = 1;
printf("The value of students_scores at index %d is %d\n", current_student, student_scores[current_student]);
```

Accessing Arrays Inside of a Loop
=================================

Arrays and loops go together like peanut butter and jelly. It's very common to need to march
our way through an array and perform some operation on each item of the array. This technique
is called "iterating over the array".

```
for (int index=0; index < num_of_sudents; index++)
{
  printf("Index = %d, Score = %d", index, student_scores[index]);
}
```

Initializing Arrays
===================

Once we create an array, we might want to initialize all of its values to a known starting
value. We can do that with a for loop also:

```
for (int index=0; index < num_of_students; index++)
{
  student_scores[index] = 0;
}
```

C gives us some fancier syntax for initializing arrays, but we're not going to use it. We'll
focus only on treating arrays the same as we would treat individual variables.

Exercise
========

Write a program to track and grade student scores. At the beginning of the program, ask the
user how many students there are. Then use a loop to let the user enter each students score.
After all the scores are entered, print out each student's score along with their grade.

Use a series of if statements to grade the student as follows:

* Scores greater than or equal to 90 get an A
* Scores greater than or equal to 80 but less than 90 bet a B
* Scores 70 to less than 80 get a C
* Scores 60 to less than 70 get a D
* Less than 60 get an F

When prompting for inputs or display outputs, assume the user wants to see them in human-readable,
1-based numbers. Convert 0-based indexes to 1-based numbers when printing out student numbers.

Sample output:

```
How many students? 5
Enter Student #1 score: 95
Enter Student #2 score: 85
Enter Student #3 score: 75
Enter Student #4 score: 65
Enter Student #5 score: 55
Here are the scores:
Student #1 : Score = 95, Grade = A
Student #2 : Score = 85, Grade = B
Student #3 : Score = 75, Grade = C
Student #4 : Score = 65, Grade = D
Student #5 : Score = 55, Grade = F
```



