#include <iostream>
int main() {
    int n, dp[31];
    std::cin >> n;
    dp[0] = 0, dp[1] = 1, dp[2] = 2;
    for (int i = 3; i < 31; i++) dp[i] = dp[i - 1] + dp[i - 2];
    std::cout << dp[n];
}