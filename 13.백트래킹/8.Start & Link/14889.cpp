#include<iostream>
#include<vector>
using namespace std;

int N;
vector<int> v;
bool Check[6];
void Print(){
    for(int i = 0 ; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout<<'\n';
}
void DFS(int idx,int cnt) {
    if(cnt == N/2) {
        Print();
        return;
    }
    for(int i = idx ; i <= N; i++) {
        if(Check[i])
            continue;
        Check[i] = true;
        v.push_back(i);
        DFS(i,cnt + 1);
        v.pop_back();
        Check[i] = false;
    }
}
int main() {
    cin >> N;
    DFS(1,0);
}