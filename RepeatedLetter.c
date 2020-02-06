#include <stdio.h>
#include <string.h>
int main()
{
    char string[] = "ALWAYS BE COOL";
    int count;
    printf("Repeated letter in the given string: \n");
    printf("%s\n",string);
    for(int i = 0; i < strlen(string); i++)
        {
            count = 1;
            for(int j = i+1; j < strlen(string); j++)
            {
                if(string[i] == string[j] && string[i] != ' ')
                {
                    count++;
                    string[j] = '0';
                }
            }
            if(count>1 && string[i]!='0')
            {
                printf("%c\n", string[i]);
            }
        }    

    return 0;
}
