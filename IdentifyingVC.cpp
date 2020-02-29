#include <iostream>
using namespace std;
int main( )
{
  char arr[15]="animesh jain";
    int b=0, c=0 ,d=0;
    //....Identifying Vowels and Consonants
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
    cout<<c;
    cout<<d;
}
