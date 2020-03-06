#include <stdio.h>
#include<stdlib.h>
#include<time.h>
# define ROWS 100
# define COLUMN 100
void Playerselect(int x, char grid[ROWS][COLUMN]);
void print_array(char grid[ROWS][COLUMN]);
void Playerselecto(int o, char grid[ROWS][COLUMN]);
int Computerchoice(void){
    int r;
    r=rand()%9+1;
    return r;
    }
void playerinput(char grid[ROWS][COLUMN]){
    int x;
    printf("enter your position to move(x): ");
    scanf("%d",&x);
    Playerselect(x,grid);
    print_array(grid);
    }
void playerinputo(char grid[ROWS][COLUMN]){
    int o;
    printf("enter your position to move(o): ");
    scanf("%d",&o);
    Playerselecto(o,grid);
    print_array(grid);
    }

void Playerselect(int x,char grid[ROWS][COLUMN]){
        switch(x){
        case 1:
        grid[0][5]='X';
        break;
        case 2:
        grid[0][10]='X';
        break;
        case 3:
        grid[0][14]='X';
        break;
        case 4:
        grid[2][5]='X';
        break;
        case 5:
        grid[2][10]='x';    
        break;
        
        case 6:
        grid[2][14]='X';
        break;
        case 7:
        grid[4][5]='X';
        break;
        case 8:
        grid[4][10]='X';
        break;
        case 9:
        grid[4][14]='X';
        break;
        }
}
void Playerselecto(int o,char grid[ROWS][COLUMN]){
	switch(o){
        case 1:
        grid[0][5]='O';
        break;
        case 2:
        grid[0][10]='O';
        break;
        case 3:
        grid[0][14]='O';
        break;
        case 4:
        grid[2][5]='O';
        break;
        case 5:
        grid[2][10]='O';    
        break;
        
        case 6:
        grid[2][14]='O';
        break;
        case 7:
        grid[4][5]='O';
        break;
        case 8:
        grid[4][10]='O';
        break;
        case 9:
        grid[4][14]='O';
        break;
        }
}
	

      
    void print_array(char grid[ROWS][COLUMN]){
            int x; 
            for(x=0;x<5;x++){
                printf("%s\n",grid[x]);
                };
            for(x=0;x<=4;x++){
            printf("\n");                    
            };
         }

int main() {
        char grid[ROWS][COLUMN]={
"     1    2   3",
"               ",
"     4    5   6",
"               ",
"     7    8   9",
};
  printf("\n");
  print_array(grid);  
  playerinput(grid);
  playerinputo(grid);
  playerinput(grid);
  playerinputo(grid);  
return 0;
}
