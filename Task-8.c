#include<stdio.h>  
#include<stdlib.h> 
int main(void) {
        int size = 5;
            int* arr = (int*)malloc(size * sizeof(int)); 
               if (arr == NULL) {        
                printf("Memory allocation failed.\n");
                        return 1;   
                     }   
    for (int i = 0; i < size; i++) {   
         arr[i] = (i + 1) * 10;
         printf("Element [%d] = %d\n", i, arr[i]); 
           }    
           free(arr);    arr = NULL;   
            return 0; 
        }