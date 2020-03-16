#include <stdio.h>
int main() 
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}
int max_of_four(int a, int b, int c, int d){
int arr[4]={a,b,c,d};
int max=arr[0];
for(int i=0;i<4;i++)
{
 if(max<arr[i])
        max=arr[i];
}
return max;
}
