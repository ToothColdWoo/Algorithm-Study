#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	char *arr = new char[n];
	int sum = 0;
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
		sum += arr[i]-'0';
	printf("%d", sum);
}