#include<iostream>
#include<string.h>
using namespace std;
int main() {
	int num;
	cin >> num;
	int y = 3;
	int x = 5;

	int resultI=0;
	int resultJ=0;
	for (int i = 0; i <= num / 5; i++) {
		for (int j = 0; j <= num / 3; j++) {
			if (num == (5 * i) + (3 * j)) {
				resultI = i;
				resultJ = j;
			}
			
		}
	}
	if (resultI + resultJ == 0) {
		printf("-1");
	}
	else {
		printf("%d", resultI + resultJ);
	}
	
}