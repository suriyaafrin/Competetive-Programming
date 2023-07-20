#include <iostream>
using namespace std;
int main()
{
    int arr[10]={},count=0;;
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<10;i++)
    {
        if(arr[i]>=10)
            count++;
    }
    cout<<count;
}
