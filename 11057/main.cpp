#include <iostream>
using namespace std;

int dp[1001][11] = {0, };

int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= 10; ++i) {
        dp[1][i] = 1;
    }
    for (int i = 2; i <= n; ++i) {
        for (int j = 1; j <= 10 ; ++j) {
            for (int k = 1; k <= j ; ++k) {
                dp[i][j] += dp[i-1][k] % 10007;
            }
        }
    }
    for (int i = 1; i <= 10 ; ++i) {
        answer += dp[n][i];
    }
    answer %= 10007;
    return answer;
}

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    cout << solution(n) << '\n';
    return 0;
}
