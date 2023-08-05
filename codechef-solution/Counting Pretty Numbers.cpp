#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        int arr[n];
        cin>>l>>n;
        int pcount=0;
        for(int i=l;i<=n;i++)
        {
            if(i%10==2 || i%10==3|| i%10==9) pcount++;
        }
        cout<<pcount<<endl;



    }



    return 0;
}
