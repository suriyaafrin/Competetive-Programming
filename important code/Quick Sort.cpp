#include<bits/stdc++.h>
using namespace std;
int a[]={3,3,1,5,9,4};
int partation(int lb,int ub)
{
    int pivot=ub;
    int start=lb;
    int end=ub;
    while(start<=end)
    {
        while(a[start]<=pivot)
        {
            start++ ;
        }
        while(a[end]>pivot)
        {
            end++;
        }
        if(start>end) swap(a[start],a[end]);
    }
    swap(a[lb],a[end]);
     return end;


}
void QuickSort(int lb,int ub)
{
    int loc=partation(lb,ub);
    QuickSort(loc+1,ub);
    QuickSort(lb,loc-1);
}
int main()
{
    int size=sizeof(a)/sizeof(a[0]);
    QuickSort(0,size-1);
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
}

