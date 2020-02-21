#include <iostream>
using namespace std;
int main() 
{
    int n, remainder, ori;
    int rev = 0;
    cout<<"Enter an integer: ";
    cin>>n;
    ori = n;
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    if (ori== rev)
        cout<<ori<<" is a palindrome.";
    else
        cout<< ori <<" is not a palindrome.";
    return 0;
}
