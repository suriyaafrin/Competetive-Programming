#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    if(a*2+b*1>x*2+y*1)
    {
        cout<<"Messi\n";
    }
    else if(a*2+b*1<x*2+y*1)
    {
        cout<<"Ronaldo\n";
    }
    else
    {
        cout<<"Equal\n";
    }



    return 0;
}
