#include <iostream>

int main(){
	int T;
	scanf("%d", &T);
	int i = 0;
	int *arr = new int[T];
	while (i < T) {
		int n;
		scanf("%d",&n);
		arr[i] = n;
		i++;
	}

	int cnt=0;
	for (int i = 0; i < T; i++) {
		for (int j = 2; j <= arr[i]; j++) {
			if (arr[i] % j == 0) {
				if (arr[i] == 1) {
					continue;
				}
				else if (arr[i] == j) {
					cnt++;
				}
				else {
					break;
				}
			}
		}
	}
	printf("%d", cnt);
}