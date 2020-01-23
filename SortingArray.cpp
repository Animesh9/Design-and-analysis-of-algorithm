#include<iostream>
using namespace std;
int main()
{
    int a[50], n ,i ,j ,temp;
    cout<<"n";
    cin>>n;
    cout<<"array elements";
    for (i=0;i<n;++i)
        cin >> a[i];    
    //Sorting algorithm
    for(i=1;i<n;++i)
    {
        for(j=0;j<(n-i);++j)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    //printing array after sorting
    cout<<"array after sort";   
    for(i=0;i<n;++i)
        cout<<" "<<a[i];

}
