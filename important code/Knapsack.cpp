#include<bits/stdc++.h>
using namespace std;
int w[1000],value[1000],n,maxw;
int knapsack(int index,int weight)
{
    if(index==n+1) return 0;
    int pro1=0,pro2=0;
    if(weight+w[index]<=maxw){
        pro1=value[index]+knapsack(index+1,weight+w[index]);
    }
        pro2=knapsack(index+1,weight);
        return max(pro1,pro2);

}
int main()
{
    cin>>n>>maxw;
    for(int i=0;i<n;i++) cin>>w[i];
    for(int i=0;i<n;i++) cin>>value[i];
    cout<<knapsack(0,0)<<endl;
    return 0;

}
//https://youtu.be/9fMYQoS1h7o
