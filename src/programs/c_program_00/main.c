#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{

  int32_t array[10];
  int32_t biggestnumber;

  printf("\n");

  printf("WELCOME TO THE SORTING PROGRAM!\n");

  printf("\n");

  for (int i = 0; i < 10; i++)
  {
    printf("Number %d is: ", i + 1);
    scanf("%d", &array[i]);
  }

  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      if (array[j] < array[j + 1])
      {
        biggestnumber = array[j];
        array[j] = array[j + 1];
        array[j + 1] = biggestnumber;
      }
    }
  }
  printf("Die sortierten Zahlen sind: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", array[i]);
  }

  printf("\n");
}
