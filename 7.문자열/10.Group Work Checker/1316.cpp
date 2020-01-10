#include<iostream>
#include<string.h>
using namespace std;
	int main() {
	int num;
	scanf("%d", &num);
	int result = 0;
	
	for (int i = 0; i < num; i++) {
		bool alpha[26] = { false };
		bool isGroup = true;
		char str[100];
		scanf("%s", str);
		for (int j = 0; j < strlen(str); j++) {
			alpha[str[j] - 97] = true;;

			if (str[j] == str[j + 1]) {
				continue;
			}
			else if (str[j] != str[j + 1] && alpha[str[j + 1] - 97] == false) {
				isGroup = true;
			}
			else if (str[j+1] == '\0' && alpha[str[j]-97] == true) {
				isGroup = true;
			}
			else {
				isGroup = false;
				break;
			}
		}
		if (isGroup == true)
			result += 1;
	}
	printf("%d", result);
}