#include <stdio.h>
#include <inttypes.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

  int deinelottozahlen[6];
  int lottogewinnzahlen[46];
  int treffer = 0;
  srand(time(NULL)); // Der Zufallsgenerator

  printf("\n");

  printf("𝗪𝗜𝗟𝗞𝗢𝗠𝗠𝗘𝗡 𝗕𝗘𝗜 𝗟𝗢𝗧𝗧𝗢!");

  printf("\n");

  for (int i = 0; i < 6; i++)
  {
    printf("Deine LOTTO Zahlen [1 bis 45]: ");
    scanf("%d", &deinelottozahlen[i]);
  }

  printf("\n");

  for (int i = 0; i < 46; i++)
  {
    lottogewinnzahlen[i] = (rand() % 46) + 1;
  }

  printf("Die heutigen LOTTO Gewinnzahlen:\n");
  for (int i = 0; i < 6; i++)
  {
    printf("%d ", lottogewinnzahlen[i]);
  }

  printf("\n");

  for (int i = 0; i < 46; i++)
  {
    if (deinelottozahlen[i] == lottogewinnzahlen[i])
    {
      treffer++;
    }
  }

  printf("\n");

  printf("Du hast %d richtige Lottozahlen!\n", treffer);

  return 0;
}