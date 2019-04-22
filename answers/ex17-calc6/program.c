#include <stdio.h>

int main()
{
  int num_of_results = 9;
  int first_slot, second_slot, result_slot;
  int first_index, second_index, result_index;
  int results[num_of_results];
  int choice;

  for (int index=0; index < num_of_results; index++)
  {
    results[index] = 0;
  }
  
  do
  {
    for (int index=0; index < num_of_results; index++)
    {
      printf("Slot #%d : %d\n", index+1, results[index]);
    }

    printf("\n");
    printf("Main Menu\n");
    printf("---------\n");
    printf("1. Clear all results\n");
    printf("2. Clear a slot\n");
    printf("3. Enter a value into a slot\n");
    printf("4. Copy a value to another slot\n");
    printf("5. Add two numbers\n");
    printf("6. Subtract two numbers\n");
    printf("7. Multiply two numbers\n");
    printf("8. Divide two numbers\n");
    printf("9. Modulo two numbers\n");
    printf("0. Exit the program\n");
    printf("\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
      for (int index=0; index < num_of_results; index++)
      {
        results[index] = 0;
      }
    }
    else if (choice == 2)
    {
      printf("Which slot number to clear: ");
      scanf("%d", &first_slot);
      results[first_slot - 1] = 0;
    }
    else if (choice == 3)
    {
      printf("Which slot number to put the value: ");
      scanf("%d", &first_slot);
      printf("Enter the value: ");
      scanf("%d", &results[first_slot-1]);
    }
    else if (choice == 4)
    {
      printf("Enter the source slot number: ");
      scanf("%d", &first_slot);
      printf("Enter the destination slot number: ");
      scanf("%d", &second_slot);
      results[first_slot-1] = results[second_slot-1];
    }
    else if (choice == 5)
    {
      printf("Enter the first slot number: ");
      scanf("%d", &first_slot);
      printf("Enter the second slot number: ");
      scanf("%d", &second_slot);
      printf("Enter the result slot number: ");
      scanf("%d", &result_slot);

      first_index = first_slot - 1;
      second_index = second_slot - 1;
      result_index = result_slot - 1;

      results[result_index] = results[first_index] + results[second_index];
    }
    else if (choice == 6)
    {
      printf("Enter the first slot number: ");
      scanf("%d", &first_slot);
      printf("Enter the second slot number: ");
      scanf("%d", &second_slot);
      printf("Enter the result slot number: ");
      scanf("%d", &result_slot);

      first_index = first_slot - 1;
      second_index = second_slot - 1;
      result_index = result_slot - 1;

      results[result_index] = results[first_index] - results[second_index];
    }
    else if (choice == 7)
    {
      printf("Enter the first slot number: ");
      scanf("%d", &first_slot);
      printf("Enter the second slot number: ");
      scanf("%d", &second_slot);
      printf("Enter the result slot number: ");
      scanf("%d", &result_slot);

      first_index = first_slot - 1;
      second_index = second_slot - 1;
      result_index = result_slot - 1;

      results[result_index] = results[first_index] * results[second_index];
    }
    else if (choice == 8)
    {
      printf("Enter the first slot number: ");
      scanf("%d", &first_slot);
      printf("Enter the second slot number: ");
      scanf("%d", &second_slot);
      printf("Enter the result slot number: ");
      scanf("%d", &result_slot);

      first_index = first_slot - 1;
      second_index = second_slot - 1;
      result_index = result_slot - 1;

      results[result_index] = results[first_index] / results[second_index];
    }
    else if (choice == 9)
    {
      printf("Enter the first slot number: ");
      scanf("%d", &first_slot);
      printf("Enter the second slot number: ");
      scanf("%d", &second_slot);
      printf("Enter the result slot number: ");
      scanf("%d", &result_slot);

      first_index = first_slot - 1;
      second_index = second_slot - 1;
      result_index = result_slot - 1;

      results[result_index] = results[first_index] % results[second_index];
    }
  } while (choice != 0);

  return 0;
}
