#include <stdio.h>
#define SIZE 10
//...Main...
int main()
{
    char b[SIZE+1], oc[SIZE+1];
    int i, e=0;
    printf("Enter %d binary values: ",SIZE);
    gets(b);
    //...Ones Complement...
    for(i=0;i<SIZE;i++)
    {
        if(b[i]=='1')
        {
            oc[i]='0';
        }
        else if(b[i]=='0')
        {
            oc[i]='1';
        }
        else
        {
            printf("2-9 and alphabets are not binary numbers");
            e=1;
            break;
        }
    }
    //...Print....
    oc[SIZE]='\0';
    if(e==0)
    {
        printf("Original binary = %s\n",b);
        printf("Ones complement = %s",oc);
    }

}
