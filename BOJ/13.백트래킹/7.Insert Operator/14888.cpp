#include<iostream>
#include<algorithm>
using namespace std;
int maxN = -1000000000, minN = 1000000000;
int n,N[12],p,s,m,d;

void DFS(int cnt, int plus, int minus, int mul, int div, int result) {
    if(cnt == n) {
        maxN = max(maxN, result);
        minN = min(minN, result);
    }
    if(plus < p) {
        DFS(cnt + 1, plus + 1, minus, mul, div, result + N[cnt]);
    }
    if(minus < s) {
        DFS(cnt + 1, plus, minus + 1 , mul ,div , result - N[cnt]);
    }
    if(mul < m) {
        DFS(cnt + 1, plus, minus, mul + 1, div, result * N[cnt]);
    }
    if(div < d) {
        DFS(cnt + 1, plus, minus, mul, div + 1, result / N[cnt]);
    }
}
int main() {
    scanf("%d",&n);
    for(int i = 0 ; i < n; i++){
        cin >> N[i];
    }
    cin >> p >> s >> m >> d;
    DFS(1,0,0,0,0,N[0]);
    printf("%d\n",maxN);
    printf("%d\n",minN);
}