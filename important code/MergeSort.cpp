#include<bits/stdc++.h>
using namespace std;
const int mx = 2e5+123;
int a[mx];

void merge( int l, int mid, int r )
{
    int p = l;
    int q = mid+1;

    int tmp[r-l+1];
    int k = 0;

    while ( p <= mid && q <= r ) {
        if ( a[p] <= a[q] ) {
            tmp[k] = a[p];
            k++;
            p++;
        }
        else {
            tmp[k] = a[q];
            q++;
            k++;
        }
    }

    while ( p <= mid ) {
        tmp[k] = a[p];
        p++;
        k++;
    }

    while ( q <= r ) {
        tmp[k] = a[q];
        q++;
        k++;
    }

    k = 0;
    for ( int i = l; i <= r; i++ ) {
        a[i] = tmp[k];
        k++;
    }
}

void mergeSort( int l, int r )
{
    if ( l == r ) return;

    int mid = ( l + r ) / 2;
    mergeSort( l, mid );
    mergeSort( mid+1, r );

    merge ( l, mid, r );
}

int main()
{


    int n;
    cin >> n;
    for ( int i = 1; i <= n; i++ ) cin >> a[i];

    mergeSort( 1, n );

    for ( int i = 1; i <= n; i++ ) cout << a[i] << " ";
    cout << endl;


    return 0;
}


