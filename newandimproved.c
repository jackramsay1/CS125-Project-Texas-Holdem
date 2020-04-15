#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#define ROWS 100
#define COLUMN 100
void playerGo(int playerPos, char playerLetter, char grid[ROWS][COLUMN]);
int selectPosition(char);


void print_array(char grid[ROWS][COLUMN]);  

int testforwin(char grid[ROWS][COLUMN]) //checks for an X or O win
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



int selectPosition(char player) {  //allows player to enter desired position. Error handling included    
 int x;
    int numRead;
    printf("\n");
    scanf("%*c");       //read in \n                                                         
    printf("Enter your position to move(%c): ", player);
    numRead = scanf("%d", &x);
    while ((numRead != 1) &&
         (x!=1 && x!=2 && x!=3 && x!=4 && x!=5 && x!=6 && x!=7 && x!=8 && x!=9)){
         printf("Not a valid choice! Choose 1-9\n");
         printf("Enter your position to move(%c): ", player);
      scanf("%*[^\n]");
         scanf("%d", &x);
    }

     return x;
}

void playerGo(int playerPos, char playerLetter, char grid[ROWS][COLUMN]){    //places users position input
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
	if ((grid[x][y] == 'X')||(grid[x][y] == 'O')){  //error handling for filled positions
	  printf("This position is taken \n");
          pos=selectPosition(playerLetter);
	}  
        else {
          legalMove = 1; //they went somewhere no one else has gone
	}
	//printf("in while pos=%d\n", pos);
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

int main()  //main function
{
    int player_count = 2;
    char player;
    char player1;
    char player2;
    int u=0;
    int over=0;
    int v;
    int j;
	
char title1[ROWS][COLUMN] = {  //ascii art

"╭╮╭╮╭╮  ╭╮             ",
"┃┃┃┃┃┃  ┃┃             ",
"┃┃┃┃┃┣━━┫┃╭━━┳━━┳╮╭┳━━╮",
"┃╰╯╰╯┃┃━┫┃┃╭━┫╭╮┃╰╯┃┃━┫",
"╰╮╭╮╭┫┃━┫╰┫╰━┫╰╯┃┃┃┃┃━┫",
" ╰╯╰╯╰━━┻━┻━━┻━━┻┻┻┻━━╯",
};


for(j=0; j<=5; j++){     //for loop to print all rows of grid
printf("%s", title1[j]);
printf("\n");
}
printf("\n");


char title2[ROWS][COLUMN] = {

" ╭╮    ",
"╭╯╰╮   ",
"╰╮╭╋━━╮",
" ┃┃┃╭╮┃",
" ┃╰┫╰╯┃",
" ╰━┻━━╯",
};

for(j=0; j<=6; j++){
printf("%s", title2[j]);
printf("\n");
}
printf("\n");


char title3[ROWS][COLUMN] = {

"╭━━━━╮   ╭━━━━╮   ╭━━━━╮     ",
"┃╭╮╭╮┃   ┃╭╮╭╮┃   ┃╭╮╭╮┃     ",
"╰╯┃┃┣╋━━╮╰╯┃┃┣┻━┳━┻┫┃┃┣┻━┳━━╮",
"  ┃┃┣┫╭┳┻━╮┃┃┃╭╮┃╭━╯┃┃┃╭╮┃┃━┫",
"  ┃┃┃┃╰┻┳━╯┃┃┃╭╮┃╰━╮┃┃┃╰╯┃┃━┫",
"  ╰╯╰┻━━╯  ╰╯╰╯╰┻━━╯╰╯╰━━┻━━╯",
};

for(j=0; j<=6; j++){
printf("%s", title3[j]);
printf("\n");
}
printf("\n");
    FILE *Record = fopen("GameRecord.txt", "a");   //txt.file
    
    if (player_count == 2) {                      //intro with error handling
	    printf("Welcome to Tic Tac Toe!\n");
	    printf("Player 1 choose x or o:\n");
	    scanf("%s", &player1);
	    while (player1 != 'x' && player1 != 'o') {
		printf("Enter only x or o\n");
		scanf("%*c");	//read in \n
		printf("Choose x or o.\n");
		scanf("%s", &player1);
	
	    }
	    if (player1 == 'x') {               //print statments so the user knows who is X and O
		player2 = 'o';
		printf("Player 1 is x\n");
		printf("Player 2 is o\n");
	    } else if (player1 == 'o') {
		player2 = 'x';
		printf("Player 1 is o\n");
		printf("Player 2 is x\n");
	    }
    }
	    char grid[ROWS][COLUMN] = {         //grid for the game
		"     1  | 2 | 3",
		" -------------------",
		"     4  | 5 | 6",
		" -------------------",
		"     7  | 8 | 9",
	    };
	    printf("\n");
while(u!=1 && u!=2){                          //checks for win for X or O and prints statement to user
	    while (over !=1 && over!=2) {
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
                //print_array(grid);
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
        fprintf(Record,"\n");             ///prints to txt.file
	    for (x=0; x < 5; x++) {
		fprintf(Record, "%s\n", grid[x]);
	    }
	   
	printf("Would you like to play again? (1)yes (2)no ");   //reprompts user
	scanf("%d", &v);
		while (

         (v!=1 && v!=2 )){                                       //error handling

         printf("Not a valid choice! Choose 1-2\n");

         printf("Would you like to play again?(%c): ", player);

      scanf("%*[^\n]");

         scanf("%d", &v);

    }
	if (v==1){
	    u=0;
	    over=0;
	}
	else if(v==2){
	break;
	}
	
		
	
        strcpy(grid[0], "     1  | 2 | 3");
        strcpy(grid[1], " -------------------");
        strcpy(grid[2], "     4  | 5 | 6");
        strcpy(grid[3], " -------------------");
        strcpy(grid[4], "     7  | 8 | 9" );

	
	}
	

    
    fclose(Record);

    return 0;
}


