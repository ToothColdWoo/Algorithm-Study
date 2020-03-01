#include <iostream>
using namespace std;

bool isPrime(int n);
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n;
		scanf("%d", &n);
		if (n % 2 != 0)
			break;
		int n1, n2;
		n1 = n / 2;
		n2 = n / 2;
		while (n1 >= 2) {
			if (isPrime(n1) && isPrime(n2)) {
				break;
			}
			n1--;
			n2++;
		}
		printf("%d %d\n", n1, n2);
	}
}

bool isPrime(int n) {
	for (int i = 2; i <= n; i++) {
		if (n % i == 0) {
			if (n == i)
				return true;
			else
				return false;
		}
		continue;
	}
}