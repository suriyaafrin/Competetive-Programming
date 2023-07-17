#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<str;
    getline(cin,str);
    int xCount=0;
    int l=str.size();
    for(int i=0;i<l;i++){
    if(str[i]='x')
    {
        xCount++;
    }

}
        cout<<xCount;

}
