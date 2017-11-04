#include <iostream>
using namespace std;

int arr[1001];

int solution(int n) {
    int answer = 0;
    arr[1] = 1;
    arr[2] = 2;
    for (int i = 3; i <= n ; ++i) {
        arr[i] = (arr[i-2] + arr[i-1]) % 10007;
    }
    answer = arr[n] % 10007;
    return answer;
}

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    cout << solution(n) << '\n';
    return 0;
}
