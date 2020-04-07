#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#define ROWS 100
#define COLUMN 100
void playerGo(int playerPos, char playerLetter, char grid[ROWS][COLUMN]);
int selectPosition(char);


void print_array(char grid[ROWS][COLUMN]);
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



int selectPosition(char player) { //was void playerinput(char grid[ROWS][COLUMN])
    int x;
    printf("enter your position to move(%c): ", player);
    scanf("%d", &x);
    //add error handling to make sure not letter, < 1, or > 9
    return x;
}


void playerGo(int playerPos, char playerLetter, char grid[ROWS][COLUMN]){
  int legalMove = 0;
  int x=0, y=5;
  int pos= playerPos;

  while (legalMove == 0){
	switch (pos) {
	case 1:    //1  =>  grid[0][5]
	   x = 0;
           y = 5;
           break; 
        case 2:    //2 => grid[0][10]
           x = 0;
           y = 10;
           break; 
        case 3:   //3 => grid[0][14]
           x = 0;
           y = 14; 
           break;
	case 4:    //4  =>  grid[2][5]
	  x = 2;
	  y = 5;
	  break;
        case 5:    //5 => grid[2][10]
	  x = 2;
	  y = 10;
	  break;
        case 6:   //6 => grid[2][14]
          x = 2;
	  y = 14;
	  break;
	case 7:   //7  =>  grid[4][5]                                                                       
	  x = 4;
	  y = 5;
	  break;
        case 8:    //8 => grid[4][10]
	  x = 4;
	  y = 10;
	  break;
        case 9:   //9 => grid[4][14]
	  x = 4;
	  y = 14;
	  break;
	}
	if ((grid[x][y] == 'X')||(grid[x][y] == 'O')){
	  printf("This position is taken \n");
          pos=selectPosition(playerLetter);
	}  
        else {
          legalMove = 1; //they went somewhere no one else has gone
	}
	printf("in while pos=%d\n", pos);
  }
  grid[x][y]= playerLetter;
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
	int player_count = 2;
	char player;
	char player1;
    char player2;	
	//int valid = 0;

	

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
		int pos = selectPosition('X'); //playerinput(grid);
		playerGo(pos, 'X', grid);
                print_array(grid); 
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
                pos=selectPosition('O');
		playerGo(pos, 'O', grid);
                print_array(grid);
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
