#include<iostream>
#define MAX 21
using namespace std;
int N;
int arr[MAX][MAX];

void SetTeam(){

}
void DFS(int x, int y) {
    SetTeam();
    if(cnt == N){
        return;
    }
    for(int i =0  ; i < N; i++) {
        for(int j = 0 ; j < N; j++) {
            if(i == j ){
                continue;
            }
            
        }
    }
}
int main() {
    cin >> N;
    for(int i = 1 ; i <=N; i++) {
        for(int j = 1; j <= N; j++) {
            cin >> arr[i][j];
        }
    }
    DFS(0,0);
}