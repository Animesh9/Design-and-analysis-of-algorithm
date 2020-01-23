#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[5];
    int a[10],i;
    int n;
    scanf ("%s",&str);
    system("cls");
    n = str;
    printf("Entered number %s\n",n);
    printf("After reversing string is =%s\n",strrev(n));
}
