#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       string str;
       cin>>str;
       string str1;
       cin>>str1;

        for(int i=0;i<5;i++)
        {
            if(str[i]==str1[i]) cout<<"G";
            else cout<<"B";
        }
        cout<<endl;
    }

    return 0;
}
