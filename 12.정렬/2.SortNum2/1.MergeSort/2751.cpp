#include<iostream> //Bubble Sort
using namespace std;
int arr[1000001];
int tmp[1000001];
void Merge(int low, int mid, int high) {
    int h = low, i = low, j = mid + 1, k;

    while( (h<= mid && (j <= high)) ){
        if( arr[h] <= arr[j]) {
            tmp[i] = arr[h];
            h++;
        }
        else{
            tmp[i] = arr[j];
            j++;
        }
        i++;
    }
    if(h > mid) {
        for(k = j; k <= high; k++){
            tmp[i] = arr[k];
            i++;
        }
    }
    else {
        for(k=h; k <= mid; k++){
            tmp[i] = arr[k];
            i++;
        }
    }
    for(k = low; k<= high; k++) {
        arr[k] = tmp[k];
    }
}
void MergeSort(int low, int high){
    if(low < high) {
        int mid = (high + low) / 2;
        MergeSort(low,mid);
        MergeSort(mid + 1 , high);
        Merge(low,mid,high);
    }
}
int main() {
    int N;
    scanf("%d",&N);
    for(int i = 0 ; i < N; i++){
        scanf("%d",&arr[i]);
    }
    MergeSort(0,N-1);
    for(int i =0; i<N; i++) {
        printf("%d\n", arr[i]);
    }
}