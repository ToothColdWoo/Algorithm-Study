#include <iostream>
#include <vector>
#define MAX 301
using namespace std;
int arr[MAX];
int DP[MAX];

int max(int a, int b){
    return a>b ? a : b;
}

void Solution(int N) {
    DP[1] = arr[1];
    DP[2] = arr[1] + arr[2];
    DP[3] = max(arr[1] + arr[3], arr[2] + arr[3]);
    for(int i =4; i <= N; i++) {
        DP[i] = max(DP[i-2] + arr[i] , DP[i-3] + arr[i-1] + arr[i]);
    }
    cout << DP[N] << "\n";
}
int main(){
    int N;
    cin >> N;
    for(int i =1; i <= N; i++) {
        cin >> arr[i];
    }
    Solution(N);
}