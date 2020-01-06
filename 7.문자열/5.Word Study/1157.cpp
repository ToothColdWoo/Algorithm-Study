#include<iostream>
#include<string.h>
using namespace std;
int main() {
	char str[1000001];
	scanf("%s", str);
	int len = strlen(str);
	int alpha[26];
	for (int i = 0; i < len; i++) {
		str[i] = toupper(str[i]);
	}
	for (int i = 0; i < 26; i++) {
		alpha[i] = -1;
	}
	for (int i = 0; i < len; i++) {
		alpha[str[i] - 65]++;
	}
	
	int max = -1;
	int tmp=0;
	for (int i = 0; i < 26; i++) {
		if (max < alpha[i]) {
			max = alpha[i];
			tmp = i;
		}
	}
	char result;
	for (int i = 0; i < 26; i++) {
		if (max == alpha[i] && i != tmp) {
			result = '?';
			break;
		}
		else
			result = tmp + 65;
		}
	printf("%c", result);

}