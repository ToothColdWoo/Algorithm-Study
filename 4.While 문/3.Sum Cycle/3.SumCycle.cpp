#include<iostream>
using namespace std;
int main() {
	int num,tmp;
	scanf("%d",&num);
	tmp = num;
	int slice1,slice2;
	int count = 0, result = 0;
	while (1) {
		if (tmp < 10)
			slice1 = 0;
		else
			slice1 = tmp / 10;
		slice2 = tmp % 10;
		
		result = slice1 + slice2;
		slice1 = tmp % 10;
		slice2 = result % 10;
		tmp = slice1 * 10 + slice2;
		count++;
		if (tmp == num)
			break;
	}
	printf("%d", count);
}
