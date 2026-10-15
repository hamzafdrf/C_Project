#include<stdio.h>
 typedef struct {    char model[20]; 
       double buy_price;
        double sell_price;
     } 
     CarSale;
      int main(void) { 
           CarSale sale = {"Sedan Civic", 18500.00, 21000.00};
               double profit = sale.sell_price - sale.buy_price;
                   printf("Car Model   : %s\n", sale.model);
                       printf("Buy Price   : $%.2f\n", sale.buy_price);
                           printf("Sell Price  : $%.2f\n", sale.sell_price);
                               printf("Net Profit  : $%.2f\n", profit); 
                                  return 0; 
                                }