#include<iostream>
#include<conio.h>
using namespace std;
class factorial
{
    int n,i,fact;
public:
    factorial(int x)
    {
        n=x;
        fact=1;
    }
    factorial(factorial &x)
    {
        n=x.n;
        fact=1;
    }
