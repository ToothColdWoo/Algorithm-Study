#include<iostream>
using namespace std;

int hanSu(int n) {
	int i, k, t, a[3], han; 
	for (i = 1; i <= n; i++) {
		if (i < 100) han = i;
		else if (i == 1000) break;
		else {
			k = 0; t = i;
			while (t > 0) {
				a[k] = t % 10;
				t /= 10; k++;
			}
			if (a[0] - a[1] == a[1] - a[2]) han++;
		}
	}


	return han;
}
int main() {
	int num;
	cin >> num;
	if (num < 0 || num > 1000) {
		printf("RESTART PROGRAM");
	}
	printf("%d\n",hanSu(num));
}
//http://blog.naver.com/PostView.nhn?blogId=occidere&logNo=220790000403