#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
int N;
int arr[500000];
int tmp[8001];
void ArithmeticMean(){
    double sum = 0 ;
    for(int i = 0; i < N; i++){
        sum += arr[i];
    }
    if(sum > 0){
        printf("%d\n",(int)(sum/N + 0.5));
    }
    else{
        printf("%d\n",(int)(sum/N - 0.5));
    }
}
void Median() {
    sort(arr,arr+N);
    printf("%d\n",arr[N/2]);
}
void Mode() {
    int num = -1;
    int max = 0;
    int result;
    for(int i = 0; i <= 8000; i++){
        if(max < tmp[i]){
            max = tmp[i];
            num = i;
        }
    }
    for(int i=0; i <= 8000; i++){
        if(i > num && max == tmp[i]){
            result = i - 4000;
            break;
        } else
            result = num - 4000;
    }
    printf("%d\n",result);
}
void Range() {
    printf("%d\n",arr[N-1] - arr[0]);
}

int main(void) {
    scanf("%d",&N);
    for(int i = 0 ; i < N; i++){
        scanf("%d",&arr[i]);
        tmp[arr[i]+4000]++;
    }
    ArithmeticMean();
    Median();
    Mode();
    Range();
}