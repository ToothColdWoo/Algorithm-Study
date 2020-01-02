#include<iostream>
using namespace std;
#define N 10001

int selfNum(int i) {
	int sum = 0;
	sum += i;
	while (1) {
		if (i == 0)
			break;
		sum += i % 10;
		i = i / 10;
	}
	return sum;
}
int main() {
	int arr[N];
	int num;
	for (int i = 1; i < N; i++) {
		int n = selfNum(i);

		if (n < N) {
			arr[n] = 1;
		}
	}
	for (int i = 1; i < N; i++) {
		if (arr[i] != 1)
			printf("%d\n", i);
	}
}
