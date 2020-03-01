#include<iostream>
#include<vector>
#define MAX 9
using namespace std;
vector<int> v;
int N, M;
void Print() {
    for(int i = 0; i < v.size(); i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}

void DFS(int Cnt) {
    if(Cnt == M) {
        Print();
        return;
    }
    for(int i =  1; i <= N; i++){
        v.push_back(i);
        DFS(Cnt+1);
        v.pop_back();
    }
}

int main() {
    cin >> N >> M;
    DFS(0);
}