#include <iostream>

using namespace std;

int main()
{
	int a, b, v;
	int temp, n;
	scanf("%d %d %d", &a, &b, &c);

	temp = v - a;
	n = temp / (a - b);
	if (temp % (a - b) != 0) {
		n++;
	}

	printf("%d", n+1);
}