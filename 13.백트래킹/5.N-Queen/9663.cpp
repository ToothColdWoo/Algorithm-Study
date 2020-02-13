#include<iostream>
#include<math.h>

using namespace std;
int arr[16];
int N,result=0;
bool Promise(int n){
    for(int i = 0; i < n; i++){
        if(arr[i] == arr[n] || abs(arr[n] - arr[i]) ==  n- i){
            return false;
        }
    }
    return true;
}
void DFS(int n){
    if(n == N) {
        result++;
        return;
    }
    for(int i = 0 ; i < N; i++ ){
        arr[n] = i;
        if(Promise(n)){
            DFS(n+1);
        }
    }
}
int main() {
    scanf("%d", &N);
    DFS(0);
    printf("%d", result);
}