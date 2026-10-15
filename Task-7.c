#include<stdio.h>  
#define ROWS 5
 #define COLS 6
  void display_seat_map(char seats[ROWS][COLS])
   {    
    printf("      A B C   D E F\n");    
    for (int r = 0; r < ROWS; r++) {       
         printf("Row %d ", r + 1);       
          for (int c = 0; c < COLS; c++) { 
            if (c == 3) printf("  ");
            printf("%c ", seats[r][c]); 
               }        printf("\n");  
              } } int main(void) {    
                char seats[ROWS][COLS] = {   
                 {'O', 'X', 'O', 'O', 'O', 'X'},    
                  {'O', 'O', 'O', 'X', 'O', 'O'},       
                  {'X', 'X', 'O', 'O', 'O', 'O'},        
                  {'O', 'O', 'O', 'O', 'X', 'O'},        
                  {'O', 'X', 'O', 'O', 'O', 'O'}    
    };    printf("--- FLIGHT SEAT AVAILABILITY (O=Available, X=Booked) ---\n");
        display_seat_map(seats);    
        return 0; }