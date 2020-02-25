#include <stdio.h>
int main()
{
    int x,y,z,s=0;
    printf("  X   |  Y   |   Z   |  XY+Z  ");
    for(x=0;x<=1;++x)
        for(y=0;y<=1;++y)
            for(z=0;z<=1;++z)
            {
                if(x*y+z==2)
                    printf("\n  %d   |  %d   |   %d   |   1",x,y,z);
                else
                {
                     s=x*y+z;
                     printf("\n  %d   |  %d   |   %d   |   %d",x,y,z,s);
                }
            }
}
