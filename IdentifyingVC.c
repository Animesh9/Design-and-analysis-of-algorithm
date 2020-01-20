#include <stdio.h>
int main( )
{
    char arr[15]="animesh jain";
    int b=0, c=0 ,d=0;
    while(arr[b]!='\0')
    {
        if(arr[b]=='a'||arr[b]=='e'||arr[b]=='i'||arr[b]=='o'||arr[b]=='u')
            c++;
            else
            {
                d++;
                if (arr[b]== ' ')
                    d--;
            }

        b++;
    }
    printf("%d\n",c);
    printf("%d",d);
}
