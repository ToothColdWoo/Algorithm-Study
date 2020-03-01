#include<iostream>
using namespace std;
#define MAX 501
int arr[MAX][MAX];
int DP[MAX][MAX];
void Max(int N){
    int max = 0;
    for(int i =1; i <= N; i++) {
        if(max < DP[N][i])
            max = DP[N][i];
    }
    cout << max;
}
void Input(int N) {
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= i; j++) {
            cin >> arr[i][j];
        }
    }
}
void Solution(int N){
    arr[0][0] = arr[0][1] = arr[1][0] = DP[0][0] = DP[0][1] = DP[1][0];
    DP[1][1] = arr[1][1];
    for(int i = 1 ; i < N; i++) {
        for(int j = 1; j <= i ; j++) {
            if(DP[i+1][j] < DP[i][j] + arr[i+1][j]) {
                DP[i+1][j] = DP[i][j] + arr[i+1][j];
            }
            if(DP[i+1][j+1] < DP[i][j] + arr[i+1][j+1]){
                DP[i+1][j+1] = DP[i][j] + arr[i+1][j+1];
            }
        } 
    }
    Max(N);
}
int main() {
    int N;
    cin >> N;
    Input(N);
    Solution(N);
}