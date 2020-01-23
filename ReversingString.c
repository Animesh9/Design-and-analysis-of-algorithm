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
    printf("Number to convert: %s\n",n);
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    printf("\nBinary = ");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
