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
int main()
{
    int x;
    cout<<"\nEnter values";
    cin>>x;
    //Calling factorial function
    factorial f1(x);
    f1.calculate();
    f1.display();
    factorial f2(f1);
    f2.calculate();
    f2.display();
    return 0;
}
