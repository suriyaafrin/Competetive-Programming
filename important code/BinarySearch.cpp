#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    int ele;
    cin>>ele;

    int left = 0;
    int right =n-1;
    int index = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == ele) {
            index = mid;
            break;
        } else if (arr[mid] < ele) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
          
    }
     cout<<index<<endl;
}
