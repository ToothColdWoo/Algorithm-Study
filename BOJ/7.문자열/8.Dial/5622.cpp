#include<iostream>
#include<string.h>
int main() {
	char dial[15];
	scanf("%s", dial);
	char alpha[10][4] = {
		{},
		{},
		{'A', 'B', 'C'},
		{ 'D','E','F' },
		{ 'G', 'H', 'I' },
		{'J','K','L'},
		{'M','N','O'},
		{'P','Q','R','S'},
		{'T','U','V'},
		{'W','X','Y','Z'}
	};
	int result=0;
	for (int i = 0; i < strlen(dial); i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 4; k++) {
				if (dial[i] == alpha[j][k]) {
					result += j + 1;
				}
			}
		}
	}
	printf("%d", result);
}