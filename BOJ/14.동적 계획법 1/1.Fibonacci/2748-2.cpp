#include<iostream>
using namespace std;
void Fibonacci(int N){
    long long arr[91];
    arr[0] = 0;
    arr[1] = 1;
    for(int i =2; i<= N; i++){
        arr[i] = arr[i-2] + arr[i-1];
    }
    cout << arr[N];
}
int main() {
    int N;
    cin >> N;
    Fibonacci(N);
}