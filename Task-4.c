#include<stdio.h> 
typedef struct {   
 char subject[30];   
 int hours;
 } StudyTask;
  int main(void) { 
       StudyTask schedule[3] = { 
       {"C Programming", 3},
       {"HTML Web Design", 2},      
       {"Mathematics", 2}    };   
       printf("--- DAILY STUDY PLANNER ---\n");    
       for (int i = 0; i < 3; i++) {        
    printf("Task %d: %-18s | Duration: %d hrs\n", i + 1, schedule[i].subject, schedule[i].hours);
    }    
    return 0; }