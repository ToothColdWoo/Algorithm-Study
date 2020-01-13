#include<iostream>
#include<string.h>
using namespace std;
int main() {
	int num;
	cin >> num;
	int honeycomb = 1;
	int result = 0;
	int mul = 1;
	while (1) {
		result++;
		if (honeycomb >= num) {
			break;
		}
		else {
			honeycomb += mul*6;
			mul++;
		}
		
	}
	printf("%d", result);
}