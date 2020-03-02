#include <stdio.h>
#include<stdlib.h>
#include<time.h>
# define ROWS 100
# define COLUMN 100

int Computerchoice(void){
    int r;
    r=rand()%9+1;
    return r;
    }

int Playerselect(int x){
        switch(x){
        case 1:
        
        break;
        case 2:
        
        break;
        case 3:

        break;
        case 4:
        
        break;
        case 5:
            
        break;
        
        case 6:
        
        break;
        case 7:
        
        break;
        case 8:
    
        break;
        case 9:

        break;
        }
};

      


int main() {
    void print_array(){
        char grid[ROWS][COLUMN]={
"           *           *       ",
"           *           *       ",
"     1     *    2      *     3 ",
"           *           *       ",
"**************************************",
"           *           *       ",
"           *           *       ",
"     4     *    5      *     6 " ,
"           *           *       ",
"**************************************",
"           *           *       ",
"           *           *       ",
"     7     *    8      *     9 ",
"           *           *       ",
  };
        int x;
        for (x=0;x<17;x++){
        printf("%s\n",grid[x]);
        };
        
  
    };
  
  print_array();
  
  
return 0;
}
