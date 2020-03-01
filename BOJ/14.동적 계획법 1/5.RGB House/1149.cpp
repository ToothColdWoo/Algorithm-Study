#include <iostream>
using namespace std;

int Min(int a, int b) {
    return a < b ? a : b;
}
int main() {
    int dp[1001][3];
    int result[1001][3];
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++) {
        for(int j = 0 ; j < 3; j++) {
            cin >> dp[i][j];
        }
    }
    dp[0][0] = dp[0][1] = dp[0][2] = 0;
    result[0][0] = result[0][1] = result[0][2] = 0;
    for(int i = 1; i <= N; i++) {
        result[i][0] = Min(result[i-1][1], result[i-1][2]) + dp[i][0];
        result[i][1] = Min(result[i-1][0], result[i-1][2]) + dp[i][1];
        result[i][2] = Min(result[i-1][0], result[i-1][1]) + dp[i][2];
    }
    int ans = Min(result[N][0], Min(result[N][1],result[N][2]));
    cout << ans << '\n';
}