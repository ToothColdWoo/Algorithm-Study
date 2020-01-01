#include<iostream>
using namespace std;
int main() {
	int numList[10];
	int count=0;
	for (int i = 0; i < 10; i++) {
		cin >> numList[i];
		numList[i] = numList[i] % 42;
	}
	int tmp;
	for (int i = 0; i < 10; i++) {
		for (int j = i+1; j < 10; j++) {
			if (numList[i] == numList[j] && numList[j] != -1) {
				numList[j] = -1;
			}
		}
		if (numList[i] != -1) {
			count++;
		}

	}
		printf("%d", count);
}