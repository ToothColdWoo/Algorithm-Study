#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
			break;
		if ( b*b == a*a + c*c || a*a == b*b + c*c || c*c == a*a + b*b) {
			printf("right\n");
		}
		else
			printf("wrong\n");
	}
}