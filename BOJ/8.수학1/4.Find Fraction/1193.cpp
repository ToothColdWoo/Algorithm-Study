#include<iostream>
using namespace std;
int main() {
	int num;
	scanf("%d", &num);
	int diagonal = 1;
	int sum = 1;
	while (sum < num) {
		diagonal++;
		sum = sum + diagonal;
	}
	int result = sum - num + 1;
	if (diagonal % 2 == 0) {
		printf("%d/%d", diagonal + 1 - result, result);
	}
	else {
		printf("%d/%d", result, diagonal + 1 - result);
	}
}