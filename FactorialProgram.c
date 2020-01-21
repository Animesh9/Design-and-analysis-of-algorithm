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
    void calculate()
    {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
    }
    void display()
    {
        cout<<"\n Factorial: "<<fact;
    }

  ~factorial()
  {

      cout<<"\nDestructor is called";
  }

};
