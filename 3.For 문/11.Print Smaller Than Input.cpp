#include<iostream>
using namespace std;
int main() {
	int length, maxNum;

	scanf("%d%d", &length,&maxNum);

	int *list = new int[length];
	for (int i = 0; i < length; i++) {
		scanf("%d", &list[i]);
	}
	for (int i = 0; i < length; i++) {
		if (list[i] < maxNum)
			printf("%d ", list[i]);
	}	
}