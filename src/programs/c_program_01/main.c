// --------------------------------------------------------------------------------
// Author: Knapp Tobias
// Description: You can win money here
// --------------------------------------------------------------------------------
// History:
//
// 20252803: knapp240016 -- updated this program
// ..
// --------------------------------------------------------------------------------

#include <stdio.h>
#include <inttypes.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

  int deinelottozahlen[6];
  int lottogewinnzahlen[46];
  srand(time(NULL)); // Der Zufallsgenerator

  printf("\n");

  printf("𝗪𝗜𝗟𝗞𝗢𝗠𝗠𝗘𝗡 𝗕𝗘𝗜 𝗟𝗢𝗧𝗧𝗢! 💰");

  printf("\n");

  printf("𝗣𝗿𝗲𝗶𝘀𝗹𝗶𝘀𝘁𝗲:\n 1 richtige Zahl: 𝟭,𝟱𝟬€\n 2 richtige Zahlen: 𝟯,𝟬𝟬€\n 3 richtige Zahlen: 𝟭𝟬,𝟬𝟬€\n 4 richtige Zahlen: 𝟯𝟬,𝟬𝟬€\n 5 richtige Zahlen: 𝟱𝟬𝟬,𝟬𝟬€\n 6 richtige Zahlen: 𝟭𝟬𝟬𝟬𝟬,𝟬𝟬€\n");

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

  printf("Die heutigen Lotto Gewinnzahlen:\n");
  for (int i = 0; i < 6; i++)
  {
    printf("%d ", lottogewinnzahlen[i]);
  }

  printf("\n");

  int treffer = 0;
  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < 6; j++)
    {
      if (deinelottozahlen[i] == lottogewinnzahlen[j])
      {
        treffer++;
      }
    }
  }

  printf("\n");

  if (treffer == 1)
  {
    printf("Du hast %d richtige Lottozahl!\n", treffer);
  }
  else
  {
    printf("Du hast %d richtige Lottozahlen!\n", treffer);
  }

  if (treffer == 1)
  {

    printf("Du hast 𝟭,𝟱𝟬€ gewonnen!\n");
  }
  else if (treffer == 2)
  {

    printf("Du hast 𝟯,𝟬𝟬€ gewonnen!\n");
  }
  else if (treffer == 3)
  {

    printf("Du hast 𝟭𝟬,𝟬𝟬€ gewonnen!\n");
  }
  else if (treffer == 4)
  {

    printf("Du hast 𝟯𝟬,𝟬𝟬€ gewonnen!\n");
  }
  else if (treffer == 5)
  {

    printf("Du hast 𝟱𝟬𝟬,𝟬𝟬€ gewonnen!\n");
  }
  else if (treffer == 6)
  {

    printf("JACKPOT!! Du hast 𝟭𝟬𝟬𝟬𝟬,𝟬𝟬€ gewonnen!\n");
  }

  printf("\n");

  return 0;
}