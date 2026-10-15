#include<stdio.h> 
void print_transcript(const char* student_name, const char* roll_num, float gpa)
 {    printf("========================================\n");   
     printf("         ACADEMIC TRANSCRIPT            \n");   
      printf("========================================\n");  
        printf(" Student Name  : %-22s\n", student_name);   
         printf(" Roll Number   : %-22s\n", roll_num);   
          printf(" Cumulative GPA: %-21.2f\n", gpa);   
           printf("========================================\n"); 
        } 
           int main(void) {   
     print_transcript("Student Name", "CS-2026-89", 3.95f);   
      return 0; }