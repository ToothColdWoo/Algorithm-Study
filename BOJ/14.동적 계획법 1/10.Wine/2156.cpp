#include <iostream>
#include <algorithm>
using namespace std;
int Arr[10001];
int DP[10001];
void Solution(int N) {
    DP[1] = Arr[1];
    DP[2] = Arr[1] + Arr[2];
    for(int i =3; i <= N; i++) {
        DP[i] = max(DP[i-1],max(Arr[i] + DP[i-2], Arr[i] + Arr[i-1] + DP[i-3]));
    }
    cout << DP[N];
}

int main() {
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++) cin >> Arr[i];
    Solution(N);
}