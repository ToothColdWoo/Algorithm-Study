#include <cstdio>

long long int fibonacci(int n) {
    long long int arr[91] = {0,};

    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i <= 90; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
    return arr[n];
}

int main() {
    int n;
    long long int result;
    scanf("%d", &n);
    result = fibonacci(n);

    printf("%lld", result);
}