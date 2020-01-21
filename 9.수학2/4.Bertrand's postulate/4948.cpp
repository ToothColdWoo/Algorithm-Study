#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	
	while (1) {
		int n;
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		bool *isPrime = new bool[2 * n+1];
		for (int i = 0; i <= 2 * n; i++) {
			isPrime[i] = true;
		}
		isPrime[0] = false;
		isPrime[1] = false;
		for (int i = 2; i <= 2 * n; i++) {
			if (isPrime[i]) {
				for (int j = 2*i; j <= 2 * n; j += i)
					isPrime[j] = false;
			}
		}
		
		int cnt = 0;
		for (int i = n+1; i <= 2 * n; i++) {
			if (isPrime[i])
				cnt++;
		}
		printf("%d\n", cnt);
	}
}

