#include<iostream>
#include<string.h>
void swapFunc(char nump[]);
int main() {
	char num1[4];
	char tmp;
	char num2[4];
	scanf("%s%s",num1, num2);
	
	swapFunc(num1);
	swapFunc(num2);
	int result1 = atoi(num1);
	int result2 = atoi(num2);
	if (result1 > result2) {
		printf("%d", result1);
	}
	else if (result1 < result2) {
		printf("%d", result2);
	}
}

void swapFunc(char num[]) {
	char tmp;
	tmp = num[0];
	num[0] = num[2];
	num[2] = tmp;
}