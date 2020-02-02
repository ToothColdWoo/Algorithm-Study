#include<iostream>
using namespace std;
int weight[1000];
int height[1000];
int main() {
    int N;
    scanf("%d", &N);
    for(int i = 0 ; i < N ; i++) {
        scanf("%d %d", &weight[i], &height[i]);
    }
    for(int i = 0 ; i < N; i++){
        int cnt=0;
        for(int j = 0; j < N ; j++){
            if(weight[i] < weight[j] && height[i] < height[j]){
                cnt++;
            }
        }
        printf("%d ", cnt+1);
    }
}