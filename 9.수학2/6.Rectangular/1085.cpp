#include<iostream>
using namespace std;
int main() {
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	int arr[4];
	int result1, result2, result3, result4;
	if (x<1 && x >w - 1) {
		printf("ERR");
	}
	if (y <1 && y > h - 1) {
		printf("ERR");
	}
	arr[0] = x - 0;
	arr[1] = y - 0;
	arr[2] = w - x;
	arr[3] = h - y;
	int min = arr[0];
	for (int i = 1; i < 4; i++) {
		if (min > arr[i])
			min = arr[i];
	}
	printf("%d", min);

}