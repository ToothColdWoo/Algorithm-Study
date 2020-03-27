#include<iostream>
using namespace std;

int min(int a, int b, int c) {
    if( a < b) return a < c ? a : c;
    else return b < c ? b : c;
}
int DivByTwo(int n){
    if(n % 2 == 0) return n / 2 ;
    else return 0;
}
int DivByThree(int n){
    if(n % 3 == 0) return n / 3;
    else return 0;
}
void Solution(int N){
    int DP[1000001];
    DP[0] = 1000001;
    DP[1] = 0;
    for(int i = 2; i <= N; i++) {
        int m = min(DP[i-1],DP[DivByTwo(i)],DP[DivByThree(i)]);
        DP[i] = m + 1;
    }
    cout << DP[N];
}
int main() {
    int N;
    cin >> N;
    Solution(N);
}