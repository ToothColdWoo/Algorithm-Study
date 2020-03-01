#include<iostream>
#include<string.h>
using namespace std;
int main() {
	int num;
	cin >> num;
	for(int k = 0; k < num; k ++) {
		int caseNum;
		char str[20];
		cin >> caseNum >> str;
		for (int i = 0; i < strlen(str); i++) {
			
			for (int j = 0; j < caseNum; j++) {
				printf("%c", str[i]);
			}
		}
		printf("\n");
	}
}