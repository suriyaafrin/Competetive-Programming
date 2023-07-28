#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b && a>c) cout<<a-b<<endl;
        //else cout<<a-c<<endl;
        if(b>a && b>c) cout<<b-a<<endl;
       // else cout<<b-c<<endl;
        if(c>a && c>b) cout<<c-a<<endl;
     //   else cout<<c-b<<endl;


    }

    return 0;
}
