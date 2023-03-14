#include <iostream>

using namespace std;

int dp[1001];
long long fibo(int n) {
    if (dp[n] != 0) return dp[n];
    if (n <= 2) {
        dp[n] = 1;
    } else {
        dp[n] = fibo(n - 1) + fibo(n - 2);
    }
    return dp[n];
}

int main() {
    int n;
    cin >> n;

    cout << fibo(n);
}