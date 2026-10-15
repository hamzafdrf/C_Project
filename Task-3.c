#include<stdio.h> 
void render_temperature_bar(const char* room, int temp) {  
      printf("%-12s [%02d Degree Celcius] : ", room, temp);   
       for (int i = 0; i < temp; i++) { 
        printf("-");   
             }    
        printf("\n");
 }
 int main(void) {  
      render_temperature_bar("Living Room", 24);   
    render_temperature_bar("Bedroom", 21);
        render_temperature_bar("Kitchen", 28);
            return 0; }