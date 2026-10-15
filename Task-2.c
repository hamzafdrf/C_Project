#include<stdio.h> 
char calculate_letter_grade(double percentage) {  
      if (percentage >= 85.0) return 'A';   
       if (percentage >= 70.0) return 'B';  
         if (percentage >= 55.0) return 'C';   
          if (percentage >= 40.0) return 'D';  
            return 'F'; } int main(void) {   
                 double marks[] = {88.5, 92.0, 79.5, 85.0};
                     double sum = 0.0;    int count = 4;    
                     for (int i = 0; i < count; i++) {     
                           sum += marks[i];    }   
                            double avg = sum / count;    
                               printf("Average Percentage: %.2f%%\n", avg);  
                                 printf("Final Letter Grade: %c\n", calculate_letter_grade(avg));   
                                  return 0; }
    