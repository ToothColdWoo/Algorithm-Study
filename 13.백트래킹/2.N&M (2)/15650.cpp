#include<iostream>
#include<vector>
#define MAX 9
using namespace std;
bool Visit[MAX];
vector<int> v;
int N, M;
void Print() {
    for(int i = 0; i < v.size(); i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}

void DFS(int Idx, int Cnt) {
    if(Cnt == M) {
        Print();
        return;
    }
    for(int i =  Idx; i < N; i++){
        if(Visit[i]){
            continue;
        }
        Visit[i] = true;
        v.push_back(i+1);
        DFS(i,Cnt+1);
        v.pop_back();
        Visit[i] = false;
    }
}

int main() {
    cin >> N >> M;
    DFS(0,0);
}