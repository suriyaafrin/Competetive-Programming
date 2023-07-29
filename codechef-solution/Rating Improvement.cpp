#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if( x<=y && (x+200)>=y) cout<<"YES\n";
        else cout<<"NO\n";
    }


    return 0;
}
