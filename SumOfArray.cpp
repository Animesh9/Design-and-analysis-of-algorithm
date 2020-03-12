#include<iostream>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    int** array= new int*[n];
    for(int i=0;i<n;i++)
    {
        array[i]= new int[n];
        for(int j=0;j<n;j++)
        {
            cin>> array[i][j];
        }
    }
      
    cout<<sum;
	return 0;
}
