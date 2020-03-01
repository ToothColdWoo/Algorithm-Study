#include<iostream> //Bubble Sort
using namespace std;
int main() {
    int N;
    scanf("%d",&N);
    int tmp;
    int arr[1000];
    for(int i = 0 ; i < N; i++) {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < N; i++){
        for(int j = i+1; j <N;j++) {
            if(arr[i] > arr[j]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for(int i = 0 ; i < N; i++){
        printf("%d\n", arr[i]);
    }
}