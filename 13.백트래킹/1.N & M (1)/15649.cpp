#include <iostream>
using namespace std;
void dfs(int n, int m, int list[], bool check[], int cnt) {
    if(cnt == m) {
        for(int i = 0 ; i < m; i++) {
            cout << list[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i = 1; i <= n; i++){
        if(!check[i]) {
            check[i] = true;
            list[cnt] = i;
            dfs(n,m,list,check,cnt+1);
            check[i] = false;
        }
    }
}
int main() {
    int N, M;
    int list[9]={ 0,};
    bool check[9] = { 0, };

    cin >> N >> M;

    dfs(N,M,list,check,0);

}