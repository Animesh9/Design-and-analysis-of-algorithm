#include <stdio.h>
#include<string.h>
struct DevOps
{
    int si;
    char n[15];
    int sc;
};

int main()
{
    struct DevOps s1;
    struct DevOps *p;
    p = &s1;
    scanf ("%d%s%d",&p->si,&p->n,&p->sc);
    printf("\n%d\n%s\n%d\n",p->si,p->n,p->sc);
}
