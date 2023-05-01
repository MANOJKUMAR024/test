#include <stdio.h>

void factorial() {
   int n, i;
   unsigned long long factorial = 1;

   printf("Enter an integer: ");
   scanf("%d", &n);

   // If n is negative, error message is displayed
   if (n < 0)
      printf("Error! Factorial of a negative number doesn't exist.");
   else {
      for (i = 1; i <= n; ++i) {
         factorial *= i;
      }
      printf("Factorial of %d = %llu", n, factorial);
   }

   //return 0;
}

