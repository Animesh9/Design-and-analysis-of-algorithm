#include <iostream>
using namespace std;
int main()
{
  int a[3];
  cout<<"Enter any 3 numbers from o-9: ";
  int i;
  for(i=0;i<3;i++)
  cin>>a[i];
  for (int x = 0; x < 3; x++)
  {
    for (int y = 0; y < 3; y++) 
    {
      for (int z = 0; z < 3; z++) 
      {
        if (x != y && y != z && z != x) 
        {
          cout<<a[x] << "" << a[y] << ""<< a[z]<<endl;
        }
      }
    }
  }
}
