#include <iostream>
using namespace std;
int main()
{
    int n, i, prime = 0;
    cout<<"Enter a positive integer: ";
    cin>>n;
    for (i = 2; i <= n / 2; ++i) 
    {
        if (n % i == 0) 
        {
            prime = 1;
            break;
        }
    }
    if (n == 1) 
    {
        cout<<"1 is neither prime nor composite.";
    }
    else 
    {
        if (prime == 0)
            cout<<n<< "is a prime number.";
        else
            cout<<n<<" is not a prime number.");
    }
    return 0;
}
