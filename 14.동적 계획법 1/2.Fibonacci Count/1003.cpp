#include<cstdio>
long long zero[41];
long long one[41];
void fibonacci(int n) {
        zero[0] = 1;
        zero[1] = 0;
        one[0] = 0;
        one[1] = 1;
    for(int i =2; i <= 40; i++) {
        zero[i] = zero[i-1] + zero[i-2];
        one[i] = one[i-1] + one[i-2];
    }
}
void PrintFibonacci(int n) {
    zero[41]= {0,};
    one[41] = {0,};
    fibonacci(n);
    printf("%d %d\n", zero[n], one[n]);
}
int main() {
    int n;
    scanf("%d", &n);
    while(n > 0){
        int num;
        scanf("%d", &num);
        PrintFibonacci(num);
        n--;
    }
}