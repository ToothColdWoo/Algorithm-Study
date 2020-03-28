#include <iostream>
#include <vector>
using namespace std;

void Solution(int N, int K, int Arr[]) {

    int cnt = 0;
    for(int i =N-1; i >= 0; i--) {
            int n = K / Arr[i];
            K %= Arr[i];
            cnt += n;
    }
    cout << cnt;
}
int main() {
    int Arr[11];
    int N, K;
    cin >> N >> K;
    for(int i = 0; i < N; i++) cin >> Arr[i];
    Solution(N,K,Arr);
}