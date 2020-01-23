#include<iostream>
using namespace std;
int main() {
	int arrX[3];
	int arrY[3];
	int tmpX;
	int tmpY;
	for (int i = 0; i < 3; i++) {
		scanf("%d %d", &arrX[i], &arrY[i]);
	}
	tmpX = arrX[0];
	tmpY = arrY[0];
	int resultX, resultY;
	if (tmpX == arrX[1]) {
		resultX = arrX[2];
	}
	else if (tmpX == arrX[2]) {
		resultX = arrX[1];
	}
	else if (tmpX != arrX[1] && tmpX != arrX[2]) {
		resultX = arrX[0];
	}
	if (tmpY == arrY[1]) {
		resultY = arrY[2];
	}
	else if (tmpY == arrY[2]) {
		resultY = arrY[1];
	}
	else if (tmpY != arrX[1] && tmpX != arrY[2]) {
		resultY = arrY[0];
	}
	printf("%d %d", resultX, resultY);

}