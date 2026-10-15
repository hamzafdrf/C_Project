#include<stdio.h> 
 #include<stdbool.h>
  bool validate_positive_integer(int value) {   
     return value > 0;
     } int main(void) 
     {    int test_val = 42; 
           if (validate_positive_integer(test_val)) {  
                printf("Value %d is VALID and secure.\n", test_val); 
   } 
   else
    {  
      printf("Value %d is INVALID.\n", test_val);  
      }    
      return 0; 
    }