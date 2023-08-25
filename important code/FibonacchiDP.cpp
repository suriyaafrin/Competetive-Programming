#include <bits/stdc++.h>
using namespace std;

int memo[100]; // Array to store memoized values

int fib(int n) {
    if (memo[n] != -1) {
        return memo[n];
    }
    if (n < 0) {
        // Handle error here
        return 0;
    }
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    int sum = fib(n - 1) + fib(n - 2);
    memo[n] = sum;
    return sum;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Initialize memoization array
    for (int i = 0; i <= n; i++) {
        memo[i] = -1;
    }

    cout << "Fibonacci(" << n << ") = " << fib(n) << endl;
    return 0;
}
