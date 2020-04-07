#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#define ROWS 100
#define COLUMN 100
void Playerselect(int x, char grid[ROWS][COLUMN]);
void print_array(char grid[ROWS][COLUMN]);
void Playerselecto(int o, char grid[ROWS][COLUMN]);
int testforwin(char grid[ROWS][COLUMN])
{
    int value;
    if ((grid[0][5] == 'X' && grid[0][10] == 'X' && grid[0][14] == 'X') ||
	(grid[0][5] == 'X' && grid[2][5] == 'X' && grid[4][5] == 'X') ||
	(grid[0][10] == 'X' && grid[2][10] == 'X' && grid[4][10] == 'X') ||
	(grid[0][14] == 'X' && grid[2][14] == 'X' && grid[4][14] == 'X') ||
	(grid[2][5] == 'X' && grid[2][10] == 'X' && grid[2][14] == 'X') ||
	(grid[4][5] == 'X' && grid[4][10] == 'X' && grid[4][14] == 'X') ||
	(grid[0][5] == 'X' && grid[2][10] == 'X' && grid[4][14] == 'X') ||
	(grid[4][5] == 'X' && grid[2][10] == 'X' && grid[0][14] == 'X')) {

	value = 1;
    } else if ((grid[0][5] == 'O' && grid[0][10] == 'O'
	       && grid[0][14] == 'O') || (grid[0][5] == 'O'
	       && grid[2][5] == 'O' && grid[4][5] == 'O')
	       || (grid[0][10] == 'O' && grid[2][10] == 'O'
	       && grid[4][10] == 'O') || (grid[0][14] == 'O'
	       && grid[2][14] == 'O' && grid[4][14] == 'O')
	       || (grid[2][5] == 'O' && grid[0][10] == 'O'
	       && grid[0][14] == 'O') || (grid[4][5] == 'O'
	       && grid[4][10] == 'O' && grid[4][14] == 'O')
	       || (grid[0][5] == 'O' && grid[2][10] == 'O'
	       && grid[4][14] == 'O') || (grid[4][5] == 'O'
	       && grid[2][10] == 'O' && grid[0][14] == 'O')) {
	value = 2;
    } else
	value = 0;
    return value;
}



void playerinput(char grid[ROWS][COLUMN])
{
    int x;
    printf("enter your position to move(X): ");
    scanf("%d", &x);
    Playerselect(x, grid);
    print_array(grid);
}

void playerinputo(char grid[ROWS][COLUMN])
{
    int o;
    printf("enter your position to move(O): ");
    scanf("%d", &o);
    Playerselecto(o, grid);
    print_array(grid);
}

void Playerselect(int x, char grid[ROWS][COLUMN])
{
    switch (x) {
    case 1:
	while(grid[0][5] == 'O' || grid[0][5] == 'X') {
		printf("This position is taken\n");
		playerinput(grid);
    }
	grid[0][5] = 'X';
    break;
    case 2:
	while (grid[0][10] == 'O' || grid[0][10] == 'X') {
		printf("This position is taken \n");
		playerinput(grid);
	}
	grid[0][10] = 'X';
	break;
    case 3:
	while (grid[0][14] == 'O' || grid[0][14] == 'X') {
		printf("This position is taken \n");
		playerinput(grid);
	}
	grid[0][14] = 'X';
	break;
    case 4:
	while (grid[2][5] == 'O' || grid[2][5] == 'X') {
		printf("This position is taken \n");
		playerinput(grid);
	}
	grid[2][5] = 'X';
	break;
    case 5:
	while (grid[2][10] == 'O' || grid[2][10] == 'X') {
		printf("This position is taken \n");
		playerinput(grid);
	}
	grid[2][10] = 'X';
	break;
    case 6:
	while (grid[2][14] == 'O' || grid[2][14] == 'X') {
		printf("This position is taken \n");
		playerinput(grid);
	}
	grid[2][14] = 'X';
	break;
    case 7:
	while (grid[4][5] == 'O' || grid[4][5] == 'X') {
		printf("This position is taken \n");
		playerinput(grid);
	}
	grid[4][5] = 'X';
	break;
    case 8:
	while (grid[4][10] == 'O' || grid[4][10] == 'X') {
		printf("This position is taken \n");
		playerinput(grid);
	}
	grid[4][10] = 'X';
	break;
	
    case 9:
	while (grid[4][14] == 'O' || grid[4][14] == 'X') {
		printf("This position is taken \n");
		playerinput(grid);
	}
	grid[4][14] = 'X';
	break;
	}
}
void Playerselecto(int o, char grid[ROWS][COLUMN])
{
    switch (o) {
    case 1:
	while(grid[0][5] == 'X' || grid[0][5] == 'O') {
		printf("This position is taken \n");
		playerinputo(grid);
	}
	grid[0][5] = 'O';
	break;
    case 2:
	while(grid[0][10] == 'X' || grid[0][10] == 'O') {
		printf("This position is taken \n");
		playerinputo(grid);
	}
	grid[0][10] = 'O';
	break;
    case 3:
	while(grid[0][14] == 'X' || grid[0][14] == 'O') {
		printf("This position is taken \n");
		playerinputo(grid);
	}
	grid[0][14] = 'O';
	break;
    case 4:
	while(grid[2][5] == 'X' || grid[2][5] == 'O') {
		printf("This position is taken \n");
		playerinputo(grid);
	}
	grid[2][5] = 'O';
	break;
    case 5:
	while(grid[2][10] == 'X' || grid[2][10] == 'O') {
		printf("This position is taken \n");
		playerinputo(grid);
	}
	grid[2][10] = 'O';
	break;
    case 6:
	while(grid[2][14] == 'X' || grid[2][14] == 'O') {
		printf("This position is taken \n");
		playerinputo(grid);
	}
	grid[2][14] = 'O';
	break;
    case 7:
	while(grid[4][5] == 'X' || grid[4][5] == 'O') {
		printf("This position is taken \n");
		playerinputo(grid);
	}
	grid[4][5] = 'O';
	break;
    case 8:
	while(grid[4][10] == 'X' || grid[4][10] == 'O') {
		printf("This position is taken \n");
		playerinputo(grid);
	}
	grid[4][10] = 'O';
	break;
    case 9:
	while(grid[4][14] == 'X' || grid[4][14] == 'O') {
		printf("This position is taken \n");
		playerinputo(grid);
	}
	grid[4][14] = 'O';
	break;
	}
}



void print_array(char grid[ROWS][COLUMN])
{
    int x;
    for (x = 0; x < 5; x++) {
	printf("%s\n", grid[x]);
    };

}



int main()
{
    FILE *Record = fopen("GameRecord.txt", "a");
    int intro(void);
    {
	int player_count;
	char player;
	char player1;
    char player2;	
	//int valid = 0;

	// promtps user for 1 or 2 player
	printf("Are there 1 or 2 players?\n");
	int numberRead = scanf("%d", &player_count);

	// checking for valid inputs
	// and int other than 1 or 2 is invalid
	// and a letter is invalid
	while ((player_count != 1 && player_count != 2) ||
	      (numberRead != 1 && numberRead != 2)) {
	    if (numberRead != 1 || numberRead != 2) {
		printf("That is not a number. \n");
		scanf("%*[^\n]");
	    } else {
		printf("Enter only 1 or 2\n");
	    }

	    printf("Enter a number: ");
	    numberRead = scanf("%d", &player_count);
	}




// Player 1 mode
	if (player_count == 1) {
	    printf("You are now in 1 player mode\n");
	    scanf("%*c");
	    printf("Choose x or o:\n");
	    scanf("%c", &player);
	    while (player != 'x' && player != 'o') {
		printf("Enter only x or o\n");
		scanf("%*c");	//read in \n
		printf("Choose x or o.\n");
		scanf("%c", &player);
	    }
	    if (player == 'x') {
		printf("You are player x\n");
	    } else if (player == 'o') {
		printf("You are player o\n");
	    }

	}


// Player 2 mode      
	if (player_count == 2) {
	    printf("You are now in 2 player mode\n");
	    scanf("%*c");
	    printf("Player 1 choose x or o:\n");
	    scanf("%c", &player1);
	    while (player1 != 'x' && player1 != 'o') {
		printf("Enter only x or o\n");
		scanf("%*c");	//read in \n
		printf("Choose x or o.\n");
		scanf("%c", &player1);
	    }
	    if (player1 == 'x') {
		player2 = 'o';
		printf("Player 1 is x\n");
		printf("Player 2 is o\n");
	    } else if (player1 == 'o') {
		player2 = 'x';
		printf("Player 1 is o\n");
		printf("Player 2 is x\n");
	    }
	    int over = 0;

	    char grid[ROWS][COLUMN] = {
		"     1  | 2 | 3",
		" -------------------",
		"     4  | 5 | 6",
		" -------------------",
		"     7  | 8 | 9",
	    };
	    printf("\n");
while(1){
	    while (1) {
		print_array(grid);
		playerinput(grid);
		printf("\n");
		over = testforwin(grid);
		if (over == 1) {
		    printf("Player X won\n");
		    print_array(grid);
		    break;
		} else if (over == 2) {
		   printf("Player O won\n");
		    print_array(grid);
		    break;
		}
		playerinputo(grid);
		printf("\n");
		over = testforwin(grid);
		if (over == 1) {
		    printf("Player X won\n");
		    print_array(grid);
		    break;
		} else if (over == 2) {
		    printf("Player O won\n");
		    print_array(grid);

		    break;
		}
	    }




        int x;
        fprintf(Record,"\n");
	    for (x=0; x < 5; x++) {
		fprintf(Record, "%s\n", grid[x]);
	    }
	    int u;
	printf("would you like to play again? (1)yes (2)no ");
	scanf("%d", &u);
	if (u==2){
	break;
		}
        strcpy(grid[0], "     1  | 2 | 3");
        strcpy(grid[1], " -------------------");
        strcpy(grid[2], "     4  | 5 | 6");
        strcpy(grid[3], " -------------------");
        strcpy(grid[4], "     7  | 8 | 9" );

	
	}
	
	return 0;
    }
    fclose(Record);
    return 0;
}
}
