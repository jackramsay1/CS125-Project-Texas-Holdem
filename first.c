#include <stdio.h>
#include<time.h>

int
main ()
{
  int player_count;
  int valid = 0;
  char player;
  char player1;
  char player2;
  int randnum;
  int computer;
  int test;

  int position;

  // promtps user for 1 or 2 player
  printf ("Are there 1 or 2 players?\n");
  scanf ("%d", &player_count);


  // checking for valid inputs
  while (player_count != 1 || player_count != 0)
    {
      if (player_count == 1)
	{
	  break;
	}

      if (player_count == 2)
	{
	  break;
	}
      else
	{
	  printf ("Enter only 1 or 2\n");
	  scanf ("%d", &player_count);
	  valid = 0;
	}

      valid = 0;

    }


  while (player_count == 1)
    {
      printf ("You are now in 1 player mode\n");
      scanf ("%*c");
      printf ("Choose x or o:\n");
      scanf ("%c", &player);

      while (player != 'x' || player != 'o')
	{

	  if (player == 'x')
	    {
	      printf ("You are player x\n");
	      break;
	    }

	  if (player == 'o')
	    {
	      printf ("You are player o\n");
	      break;
	    }
	       }
	  else
	    {
	      printf ("Enter only x or o\n");
	      scanf ("%*c");
	      scanf ("%c", &player);
	      valid = 0;
	    }
	}
      break;

    }
  while (player_count == 2)
    {
      printf ("You are now in 2 player mode\n");
      scanf ("%*c");
      printf ("Player 1 choose x or o:\n");
      scanf ("%c", &player1);

      while (player1 != 'x' || player1 != 'o')
	{

	  if (player1 == 'x')
	    {
	      player2 = 'o';
	      printf ("Player 1 is x\n");
	      printf ("Player 2 is o\n");
	      break;
	    }
	  else if (player1 == 'o')
	    {
	      player2 = 'x';
	      printf ("Player 1 is o\n");
	      printf ("Player 2 is x\n");
	      break;
	    }
	  else
	    {
	      printf ("Enter only x or o\n");
	      scanf ("%*c");
	      scanf ("%c", &player1);
	      valid = 0;
	    }
	}
      break;
    }



  return 0;
}

