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
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0)
            {    
             sum+=array[i][j];
             array[i][j]=0;
            }
            if(i==n-1)
            {
             sum+=array[i][j];
                array[i][j]=0;   
            }
            if(j==0)
            {    
             sum+=array[i][j];
                array[i][j]=0;
            }
            if(j==n-1)
            {
             sum+=array[i][j];
                array[i][j]=0;   
            }
            if(i==j)
            {
             sum+= array[i][j];
                array[i][j]=0;           
            }
            if(i+j == ((n+1)-2))
            {
                sum += array[i][j];
                array[i][j]=0;
            }
        }
    }
    cout<<sum;
	return 0;
}
