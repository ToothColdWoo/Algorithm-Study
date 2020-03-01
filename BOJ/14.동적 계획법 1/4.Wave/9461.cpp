#include<iostream>
 
using namespace std;
typedef long long ll;
ll dp[1000] = {0,1,1,1,2,2,};
 
ll solve(int n)
{
    if(dp[n])return dp[n];
    else return dp[n] = solve(n-1) + solve(n-5);
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << solve(n) << '\n';
    }
    return 0;
}
