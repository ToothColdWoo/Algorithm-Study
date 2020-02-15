#include<iostream>
using namespace std;
#define MAX 9
int Sudoku[MAX][MAX];
bool Row[MAX][MAX];
bool Col[MAX][MAX];

int cnt;
bool Row(){

}

bool Col() {
    
}
void DFS(int n){
    if(n == cnt){
        return;
    }
    for(int i = 0 ; i< MAX;i++){

    }
}
int main() {
    for(int i = 0; i < MAX; i++) {
        for(int j = 0; j < MAX; j++) {
            cin >> Sudoku[i][j];
            if(Sudoku[i][j] == 0)
                cnt++;
        }
    }
    DFS(0)
    for(int i = 0; i < MAX; i++) {
        for(int j = 0; j < MAX; j++) {
            cin >> Sudoku[i][j];
        }
    }
}