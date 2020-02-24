#include <iostream>
using namespace std;
int main() 
{
      double a, b, temp;
      cout<<"Enter first number: ";
      cin>>a;
      cout<<"Enter second number: ";
      cin>>b;
      temp = a;
      a = b;
      b = temp;
      cout<<"\nAfter swapping, firstNumber = "<<a;
      cout<<"After swapping, secondNumber = "<< b;
      return 0;
}
