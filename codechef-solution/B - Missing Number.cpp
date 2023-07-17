#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,a,b,c;
    cin>>x>>a>>b>>c;
    if((a+b+c)==x)
    {
        cout<<"0"<<endl;
    }
    else{
        cout<<x-(a+b+c)<<endl;
    }
    return 0;
}
