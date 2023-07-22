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
        int counting=0;
        int rating[n];
        for(int i=0;i<n;i++)
        {
            cin>>rating[i];
            if(rating[i]>=1000)
            {
                counting++;

            }
        }
        cout<<counting<<endl;

    }


    return 0;
}
