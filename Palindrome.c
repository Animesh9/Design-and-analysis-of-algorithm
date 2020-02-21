#include <stdio.h>
int main() 
{
    int n, remainder, ori;
    int rev = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    ori = n;
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    if (ori== rev)
        printf("%d is a palindrome.", ori);
    else
        printf("%d is not a palindrome.", ori);
    return 0;
}
