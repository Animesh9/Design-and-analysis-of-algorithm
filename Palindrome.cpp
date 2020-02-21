#include <iostream>
using namespace std;
int main() 
{
    int n, remainder, ori;
    int rev = 0;
    cout<<"Enter an integer: ;
    cin>>n;
    ori = n;
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    if (ori== rev)
        cout<<"%d is a palindrome."<< ori;
    else
        cout<<"%d is not a palindrome."<< ori;
    return 0;
}
