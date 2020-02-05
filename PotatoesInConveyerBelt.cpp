#include<iostream>
using namespace std;
int main()
{
    int a,c1=0,c2=0,n,p;
     cout << "Enter number of potatoes in each belt ";
        cin >> n;
        int belt[6][n];
    for(int i=0; i<6; i++)
    {
        cout << "Belt-"<<i+1;
        for(a=0;a<n;a++)
        {
            cout<<"\nweight of potatoes";
            cin>>p;
            belt[i][a] = p;
            if(p>=100&&p<=200)
                c1++;
            else c2++;
        }
        for(int j=0; j<n; j++)
            cout << belt[i][j]<<endl;
    }
    cout<<"right potatoes"<<c1<<endl;
    cout<<"rotten potatoes"<<c2;

}
