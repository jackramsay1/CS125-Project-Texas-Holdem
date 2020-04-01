#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROWS 100
#define COLUMN 100
void Playerselect (int x, char grid[ROWS][COLUMN]);
void print_array (char grid[ROWS][COLUMN]);
void Playerselecto (int o, char grid[ROWS][COLUMN]);
int
testforwin (char grid[ROWS][COLUMN])
{
  int value;
  if (grid[0][5] == 'X' && grid[0][10] == 'X' && grid[0][14] == 'X' ||
      grid[0][5] == 'X' && grid[2][5] == 'X' && grid[4][5] == 'X' ||
      grid[0][10] == 'X' && grid[2][10] == 'X' && grid[4][10] == 'X' ||
      grid[0][14] == 'X' && grid[2][14] == 'X' && grid[4][14] == 'X' ||
      grid[2][5] == 'X' && grid[2][10] == 'X' && grid[2][14] == 'X' ||
      grid[4][5] == 'X' && grid[4][10] == 'X' && grid[4][14] == 'X' ||
      grid[0][5] == 'X' && grid[2][10] == 'X' && grid[4][14] == 'X' ||
      grid[4][5] == 'X' && grid[2][10] == 'X' && grid[0][14] == 'X')
    {

      value = 1;
    }
  else if (grid[0][5] == 'O' && grid[0][10] == 'O' && grid[0][14] == 'O' ||
	   grid[0][5] == 'O' && grid[2][5] == 'O' && grid[4][5] == 'O' ||
	   grid[0][10] == 'O' && grid[2][10] == 'O' && grid[4][10] == 'O' ||
	   grid[0][14] == 'O' && grid[2][14] == 'O' && grid[4][14] == 'O' ||
	   grid[2][5] == 'O' && grid[0][10] == 'O' && grid[0][14] == 'O' ||
	   grid[4][5] == 'O' && grid[4][10] == 'O' && grid[4][14] == 'O' ||
	   grid[0][5] == 'O' && grid[2][10] == 'O' && grid[4][14] == 'O' ||
	   grid[4][5] == 'O' && grid[2][10] == 'O' && grid[0][14] == 'O')
    {
      value = 2;
    }
  else
    value = 0;
  return value;
}

int
Computerchoice (void)
{
  int r;
  r = rand () % 9 + 1;
  return r;
}


void
playerinput (char grid[ROWS][COLUMN])
{
  int x;
  printf ("enter your position to move(X): ");
  scanf ("%d", &x);
  Playerselect (x, grid);
  print_array (grid);
}

void
playerinputo (char grid[ROWS][COLUMN])
{
  int o;
  printf ("enter your position to move(O): ");
  scanf ("%d", &o);
  Playerselecto (o, grid);
  print_array (grid);
}

void
Playerselect (int x, char grid[ROWS][COLUMN])
{
  switch (x)
    {
    case 1:
      while (1)
	{
	  if (grid[0][5] == 'O' || grid[0][5] == 'X')
	    {
	      printf ("This position is taken\n");
	      playerinput (grid);
	    }
	  else
	    grid[0][5] = 'X';
	  break;
	};
      break;
    case 2:
      while (1)
	{
	  if (grid[0][10] == 'O' || grid[0][10] == 'X')
	    {
	      printf ("This position is taken \n");
	      playerinput (grid);
	    }
	  else
	    grid[0][10] = 'X';
	  break;
	};
      break;
    case 3:
      while (1)
	{
	  if (grid[0][14] == 'O' || grid[0][14] == 'X')
	    {
	      printf ("This position is taken \n");
	      playerinput (grid);
	    }
	  else
	    grid[0][14] = 'X';
	  break;
	};
      break;
    case 4:
      while (1)
	{
	  if (grid[2][5] == 'O' || grid[2][5] == 'X')
	    {
	      printf ("This position is taken \n");
	      playerinput (grid);
	    }
	  else
	    grid[2][5] = 'X';
	  break;
	};
      break;
    case 5:
      while (1)
	{
	  if (grid[2][10] == 'O' || grid[2][10] == 'X')
	    {
	      printf ("This position is taken by player O\n");
	      playerinput (grid);
	    }
	  else
	    grid[2][10] = 'X';
	  break;
	};
      break;

    case 6:
      while (1)
	{
	  if (grid[2][14] == 'O' || grid[2][14] == 'X')
	    {
	      printf ("This position is taken\n");
	      playerinput (grid);
	    }
	  else
	    grid[2][14] = 'X';
	  break;
	};
      break;
    case 7:
      while (1)
	{
	  if (grid[4][5] == 'O' || grid[4][5] == 'X')
	    {
	      printf ("This position is taken\n");
	      playerinput (grid);
	    }
	  else
	    grid[4][5] = 'X';
	  break;
	};
      break;
    case 8:
      while (1)
	{
	  if (grid[4][10] == 'O' || grid[4][10] == 'X')
	    {
	      printf ("This position is taken \n");
	      playerinput (grid);
	    }
	  else
	    grid[4][10] = 'X';
	  break;
	};
      break;
    case 9:
      while (1)
	{
	  if (grid[4][14] == 'O' || grid[4][14] == 'X')
	    {
	      printf ("This position is taken\n");
	      playerinput (grid);
	    }
	  else
	    grid[4][14] = 'X';
	  break;
	};
      break;
    }
}

void
Playerselecto (int o, char grid[ROWS][COLUMN])
{
  switch (o)
    {
    case 1:
      while (1)
	{
	  if (grid[0][5] == 'X' || grid[0][5] == 'O')
	    {
	      printf ("This position is taken \n");
	      playerinputo (grid);
	    }
	  else
	    grid[0][5] = 'O';
	  break;
	};
      break;
    case 2:
      while (1)
	{
	  if (grid[0][10] == 'X' || grid[0][10] == 'O')
	    {
	      printf ("This position is taken \n");
	      playerinputo (grid);
	    }
	  else
	    grid[0][10] = 'O';
	  break;
	};
      break;
    case 3:
      while (1)
	{
	  if (grid[0][14] == 'X' || grid[0][14] == 'O')
	    {
	      printf ("This position is taken\n");
	      playerinputo (grid);
	    }
	  else
	    grid[0][14] = 'O';
	  break;
	};
      break;
    case 4:
      while (1)
	{
	  if (grid[2][5] == 'X' || grid[2][5] == 'O')
	    {
	      printf ("This position is taken\n");
	      playerinputo (grid);
	    }
	  else
	    grid[2][5] = 'O';
	  break;
	};
      break;
    case 5:
      while (1)
	{
	  if (grid[2][10] == 'X' || grid[2][10] == 'O')
	    {
	      printf ("This position is taken\n");
	      playerinputo (grid);
	    }
	  else
	    grid[2][10] = 'O';
	  break;
	};
      break;
    case 6:
      while (1)
	{
	  if (grid[2][14] == 'X' || grid[2][14] == 'O')
	    {
	      printf ("This position is taken\n");
	      playerinputo (grid);
	    }
	  else
	    grid[2][14] = 'O';
	  break;
	};
      break;
    case 7:
      while (1)
	{
	  if (grid[4][5] == 'X' || grid[4][5] == 'O')
	    {
	      printf ("This position is taken \n");
	      playerinputo (grid);
	    }
	  else
	    grid[4][5] = 'O';
	  break;
	};
      break;
    case 8:
      while (1)
	{
	  if (grid[4][10] == 'X' || grid[4][10] == 'O')
	    {
	      printf ("This position is taken\n");
	      playerinputo (grid);
	    }
	  else
	    grid[4][10] = 'O';
	  break;
	};
      break;
    case 9:
      while (1)
	{
	  if (grid[4][14] == 'X' || grid[4][14] == 'O')
	    {
	      printf ("This position is taken\n");
	      playerinputo (grid);
	    }
	  else
	    grid[4][14] = 'O';
	  break;
	};
      break;
    }
}



void
print_array (char grid[ROWS][COLUMN])
{
  int x;
  for (x = 0; x < 5; x++)
    {
      printf ("%s\n", grid[x]);
    };
  for (x = 0; x <= 4; x++)
    {
      printf ("\n");
    };
}


int
main ()
{
  int intro (void);
  {
    int player_count;
    char player;
    char player1;
    char player2;
    int randnum;
    int computer;
    int test;
    int valid;
    int position;
    //int valid = 0;

    // promtps user for 1 or 2 player
    printf ("Are there 1 or 2 players?\n");
    int numberRead = scanf ("%d", &player_count);

    // checking for valid inputs
    // and int other than 1 or 2 is invalid
    // and a letter is invalid
    while ((player_count != 1 && player_count != 2) ||
	   (numberRead != 1) && (numberRead != 2))
      {
	if (numberRead != 1 || numberRead != 2)
	  {
	    printf ("That is not a number. \n");
	    scanf ("%*[^\n]");
	  }
	else
	  {
	    printf ("Enter only 1 or 2\n");
	  }

	printf ("Enter a number: ");
	numberRead = scanf ("%d", &player_count);
      }




// Player 1 mode
    if (player_count == 1)
      {
	printf ("You are now in 1 player mode\n");
	scanf ("%*c");
	printf ("Choose x or o:\n");
	scanf ("%c", &player);
	while (player != 'x' && player != 'o')
	  {
	    printf ("Enter only x or o\n");
	    scanf ("%*c");	//read in \n
	    printf ("Choose x or o.\n");
	    scanf ("%c", &player);
	  }
	if (player == 'x')
	  {
	    printf ("You are player x\n");
	  }
	else if (player == 'o')
	  {
	    printf ("You are player o\n");
	  }

      }



// Player 2 mode      
    if (player_count == 2)
      {
	printf ("You are now in 2 player mode\n");
	scanf ("%*c");
	printf ("Player 1 choose x or o:\n");
	scanf ("%c", &player1);
	while (player1 != 'x' && player1 != 'o')
	  {
	    printf ("Enter only x or o\n");
	    scanf ("%*c");	//read in \n
	    printf ("Choose x or o.\n");
	    scanf ("%c", &player1);
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
	int over = 0;

	char grid[ROWS][COLUMN] = {
	  "     1  | 2 | 3",
	  " -------------------",
	  "     4  | 5 | 6",
	  " -------------------",
	  "     7  | 8 | 9",
	};
	printf ("\n");

	while (1)
	  {
	    print_array (grid);
	    playerinput (grid);
	    printf ("\n");
	    over = testforwin (grid);
	    if (over == 1)
	      {
		printf ("Player X won\n");
		break;
	      }
	    else if (over == 2)
	      {
		("Player O won\n");
		break;
	      }
	    playerinputo (grid);
	    printf ("\n");
	    over = testforwin (grid);
	    if (over == 1)
	      {
		printf ("Player X won\n");
		break;
	      }
	    else if (over == 2)
	      {
		printf ("Player O won\n");
		break;
	      }
	  }

      }
    /*
       int over = 0;

       char grid[ROWS][COLUMN] = {
       "     1  | 2 | 3",
       " -------------------",
       "     4  | 5 | 6",
       " -------------------",
       "     7  | 8 | 9",
       };
       printf ("\n");

       while (1)
       {
       print_array (grid);
       playerinput (grid);
       printf ("\n");
       over = testforwin (grid);
       if (over == 1)
       {
       printf ("Player X won\n");
       break;
       }
       else if (over == 2)
       {
       ("Player O won\n");
       break;
       }
       playerinputo (grid);
       printf ("\n");
       over = testforwin (grid);
       if (over == 1)
       {
       printf ("Player X won\n");
       break;
       }
       else if (over == 2)
       {
       printf ("Player O won\n");
       break;
       }
       }
     */
    return 0;
  }
  return 0;
}
