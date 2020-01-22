int main()
{
    int a[50], n ,i ,j ,temp;
    cout<<"n";
    cin>>n;
    cout<<"array elements";
    for (i=0;i<n;++i)
        cin >> a[i];
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
