#include<iostream>
#define MAX 101
using namespace std;

void Solution(int N) {
    long long DP[MAX][10];
    for(int i =1; i <= 9; i++) DP[1][i] = 1;

    for(int i =2; i <= N; i++) {
        for(int j = 0; j <= 9; j++){
            if(j == 0){
                DP[i][j] = DP[i-1][j+1] % 1000000000;
            }
            else if( j == 9) {
                DP[i][j] = DP[i-1][j-1] % 1000000000;
            }
            else DP[i][j] = DP[i-1][j-1] + DP[i-1][j+1] % 1000000000;
        }
    }
    long long sum = 0;
    for(int i = 0; i < 10; i++) sum += DP[N][i];
    cout << sum % 1000000000;
}
int main() {
    int N;
    cin >> N;
    Solution(N);
}