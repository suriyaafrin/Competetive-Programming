#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s1=s.substr(0,n/2);
        string s2=s.substr(n/2,n);
        if(s1==s2) cout<<"YES\n";
        else cout<<"NO\n";
    }



    return 0;
}
