#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    char lbl[11][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    int index;
      for (int i=a; i<=b; i++) {
        index = i <= 9 ? i - 1 : 9 + i % 2;
        printf("%s\n", lbl[index]);
    }

    return 0;
}

//...HackerRank...
