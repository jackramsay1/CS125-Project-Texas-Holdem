#include <stdio.h>
#include<stdlib.h>
#include<time.h>
# define ROWS 100
# define COLUMN 100
void Playerselect(int x, char grid[ROWS][COLUMN]);
void print_array(char grid[ROWS][COLUMN]);
int Computerchoice(void){
    int r;
    r=rand()%9+1;
    return r;
    }
void playerinput(char grid[ROWS][COLUMN]){
    int x;
    printf("enter your position to move: ");
    scanf("%d",&x);
    Playerselect(x,grid);
    print_array(grid);
    }

void Playerselect(int x,char grid[ROWS][COLUMN]){
        switch(x){
        case 1:
        grid[0][5]='x';
        break;
        case 2:
        grid[0][10]='x';
        break;
        case 3:
        grid[0][14]='x';
        break;
        case 4:
        grid[2][5]='x';
        break;
        case 5:
        grid[2][10]='x';    
        break;
        
        case 6:
        grid[2][14]='x';
        break;
        case 7:
        grid[4][5]='x';
        break;
        case 8:
        grid[4][10]='x';
        break;
        case 9:
        grid[4][14]='x';
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
  playerinput(grid);
  playerinput(grid);
  playerinput(grid);  
return 0;
}
