#include<stdio.h>
int main() 
{
      double a, b, temp;
      printf("Enter first number: ");
      scanf("%lf", &a);
      printf("Enter second number: ");
      scanf("%lf", &b);
      temp = a;
      a = b;
      b = temp;
      printf("\nAfter swapping, firstNumber = %.2lf\n",a);
      printf("After swapping, secondNumber = %.2lf", b);
      return 0;
}
