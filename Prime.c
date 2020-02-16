#include <stdio.h>
int main() {
    int n, i, prime = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
        for (i = 2; i <= n / 2; ++i) 
    {
        if (n % i == 0) 
        {
            prime = 1;
            break;
        }
    }
    
    return 0;
}
