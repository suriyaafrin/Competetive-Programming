#include <bits/stdc++.h>
using namespace std;

int naiveFibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return naiveFibonacci(n - 1) + naiveFibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Fibonacci(" << n << ") = " << naiveFibonacci(n) << endl;
    return 0;
}

