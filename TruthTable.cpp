#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"  X  |  Y  |  Z  |  XY+Z  ";
    for(x=0;x<=1;++x)
        for(y=0;y<=1;++y)
            for(z=0;z<=1;++z)
            {
                if(x*y+z==2)
                    cout<<endl<<"  "<< x <<"  |  "<< y <<"  |  "<< z <<"  |   1";
                else
                    cout<<endl<<"  "<< x <<"  |  "<< y <<"  |  "<< z <<"  |   "<<x*y+z;
            }
}
