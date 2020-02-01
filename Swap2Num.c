#include<stdio.h>
int main() 
{
      double a, b, temp;
      printf("Enter first number: ");
      scanf("%lf", &a);
      printf("Enter second number: ");
      scanf("%lf", &b);
      //Storing the value of a in temp
      temp = a;
      //storing value of b in a
      a = b;
      //Storing the value of temp in b
      b = temp;
      printf("\nAfter swapping, firstNumber = %.2lf\n",a);
      printf("After swapping, secondNumber = %.2lf", b);
      return 0;
}
