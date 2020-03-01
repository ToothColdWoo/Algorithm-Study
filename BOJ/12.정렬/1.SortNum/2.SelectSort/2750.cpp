#include<iostream> //Bubble Sort
using namespace std;
int main() {
    int N;
    scanf("%d",&N);
    int arr[1000];
    for(int i = 0 ; i < N; i++) {
        scanf("%d",&arr[i]);
    }
    int min;
    for(int i = 0; i<N-1; i++){
        min =i;
        for(int j = i+1; j < N; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        int tmp;
        tmp = arr[min];
        arr[min]  = arr[i];
        arr[i]  = tmp;
    }

    for(int i = 0; i < N;i++){
        printf("%d\n", arr[i]);
    }
}