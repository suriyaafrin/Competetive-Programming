#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,x;
        cin>>a>>b>>c>>x;
        if((a+b)>=x) cout<<"YE\n";
        else if((a+c)>=x) cout<<"YEs\n";
        else if((b+c)>=x) cout<<"YEs\n";
        else cout<<"NO\n";

    }



    return 0;
}
