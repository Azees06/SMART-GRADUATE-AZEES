#include <stdio.h> 
 
int main() { 
 
   const int maxInput = 100; 
   int i; 
   double number, average, sum = 0.0; 
 
   for (i = 1; i <= maxInput; ++i) { 
      printf("%d. Enter a number: ", i); 
      scanf("%lf", &number); 
       
      // go to jump if the user enters a negative number 
      if (number < 0.0) { 
    goto jump; 
      } 
      sum += number; 
   } return 0; 
}