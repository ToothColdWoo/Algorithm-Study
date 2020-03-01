#include<cstdio>
#define MAX 15746
int main() {
    int arr[1000000 + 1];
    int N;
    scanf("%d",&N);
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    for(int i = 3 ; i <= N; i++){
        arr[i] = arr[i-1] + arr[i-2];
        arr[i] %= MAX;
    }
    printf("%d",arr[N]);
}