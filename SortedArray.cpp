#include<iostream>

using namespace std;


void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
	int A[10], i, j, n;

	 cout<<"enter the no elements of the array ";
	 cin>> n;

	 for(i=0;i<n;i++)
	{
	  cin>> A[i];
}

for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
	 if(A[j]<A[j+1])
	 swap(A[j],A[j+1]);

}
}

cout<<"the sorted array is ";
for(i=0;i<n;i++)
cout<<"\n"<<A[i];
}


