#include<iostream>
#include<vector>
#define MAX 9
using namespace std;
vector<int> v;
int N, M;
bool Can_Print(){
    for(int i = 0 ; i < v.size()-1;i++){
        if(v[i] > v[i+1]) return false;
    }
    return true;
}
void Print() {
    if(Can_Print()){

    for(int i = 0; i < v.size(); i++){
        printf("%d ",v[i]);
    }
    printf("\n");
    }

}

void DFS(int Cnt) {
    if(Cnt == M) {
        Print();
        return;
    }
    for(int i =  0; i < N; i++){
        v.push_back(i+1);
        DFS(Cnt+1);
        v.pop_back();

    }
}

int main() {
    cin >> N >> M;
    DFS(0);
}