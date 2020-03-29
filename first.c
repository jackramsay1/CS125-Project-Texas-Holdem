#include <stdio.h>
#include<time.h>

int
main ()
{

  int player_count;
  char player;
  char player1;
  char player2;
  int randnum;
  int computer;
  int test;
  int valid = 0;

  int position;

  // promtps user for 1 or 2 player
  printf ("Are there 1 or 2 players?\n");
  int numberRead = scanf ("%d", &player_count);

  // checking for valid inputs
  // and int other than 1 or 2 is invalid
  // and a letter is invalid
  while ((player_count != 1 && player_count != 2) ||
         (numberRead != 1) &&
         (numberRead != 2))   
  {
	  if (numberRead != 1 || numberRead != 2) 
          {
	      printf ("That is not a number. \n");
	      scanf ("%*[^\n]");
          }
          else {
              printf("Enter only 1 or 2\n");
          }

          printf ("Enter a number: ");
          numberRead = scanf ("%d", &player_count);
   }

  if (player_count == 1)
  {
    printf ("You are now in 1 player mode\n");
    scanf ("%*c");
    printf ("Choose x or o:\n");
    scanf ("%c", &player);
    while (player != 'x' && player != 'o')
    {
      printf("Enter only x or o\n");
      scanf("%*c");  //read in \n
      printf("Choose x or o.\n");
      scanf("%c", &player);
    }
    if (player == 'x')
    {
        printf ("You are player x\n");
    }
    else if (player == 'o')
    {
        printf ("You are player o\n");
    }
  }  //I have not changed the code below.  It will be similar to if (player_count == 1)
  if (player_count == 2)
  {
  printf ("You are now in 2 player mode\n");
  scanf ("%*c");
  printf ("Player 1 choose x or o:\n");
  scanf ("%c", &player1);
      while (player1 != 'x' && player1 != 'o')
	{
        printf("Enter only x or o\n");
      scanf("%*c");  //read in \n
      printf("Choose x or o.\n");
      scanf("%c", &player1);
    }
	  if (player1 == 'x')
	    {
	      player2 = 'o';
	      printf ("Player 1 is x\n");
	      printf ("Player 2 is o\n");
	    }
	  else if (player1 == 'o')
	    {
	      player2 = 'x';
	      printf ("Player 1 is o\n");
	      printf ("Player 2 is x\n");
	    }
	}

    


  return 0;


}
