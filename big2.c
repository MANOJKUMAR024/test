#include <stdio.h>
void biggest() {
   int num1, num2;

   printf("Enter two numbers: ");
   scanf("%d %d", &num1, &num2);

   if (num1 > num2) {
      printf("The biggest number is %d", num1);
   }
   else {
      printf("The biggest number is %d", num2);
   }

  // return 0;
}

