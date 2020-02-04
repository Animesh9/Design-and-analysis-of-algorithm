#include<stdio.h>
#include<math.h>
int btog(long int);
//...main...
int main()
{
    long int bin, gray;
    printf("Enter a binary number: ");
    scanf("%ld",&bin);
    gray=btog(bin);
    printf("The gray code of the binary number %ld is %ld\n",bin,gray);
}
//...Gray Code...
int btog(long int bin)
{
    int a,b,res=0,i=0;
    while (bin!=0)
    {
        a=bin%10;
        bin=bin/10;
        b=bin%10;
        if((a&&!b)||(!a&&b))
        {
            res=res+pow(10,i);
        }
        i++;
    }
    return res;
}
