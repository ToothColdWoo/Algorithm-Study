#include<iostream>
using namespace std;
int main() {
	char line[100];
	scanf("%s", line);
	
	int alpha[26];
	for (int i = 0; i < 26; i++) {
		alpha[i] = -1;
	}

	for (int i = 0; i < strlen(line); i++) {
		if (alpha[line[i]-97] != -1) continue;
		alpha[line[i]-97] = i;
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", alpha[i]);
	}
}