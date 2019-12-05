#include<stdio.h>

//card structure defintion
struct card{
  char *face;
  char *suit;
};

//using typedef for easier declaration
typedef struct player{
  char *name;
  float bets;
} CardPlayer;

int main()
{

  struct card aCard;

  CardPlayer myself;

  
  //place strings in aCard
  aCard.face = "Ace";
  aCard.suit = "Spades";

  struct card *cardPtr = &aCard;

  printf("%s%s%s\n", aCard.face, " of ", aCard.suit);
  printf("%s%s%s\n", cardPtr->face, " of ", cardPtr->suit);
  printf("%s%s%s\n", (*cardPtr).face, " of ", (*cardPtr).suit);

  myself.name = "Sugita";
  myself.bets = 100.0;

  printf("%s bets %f\n", myself.name, myself.bets);
}
