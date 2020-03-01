#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	int result;
	cin >> a >> b >> c;
	if (a>=b){
		if (b>=c)
			result = b;
		else if (b<c){
			if (a>c)
				result = c;
			else
				result = a;
		}
	}
	else if (a <= b) {
		if (c < a) {
			result = a;
		}
		else if (c > a) {
			if (c > b) {
				result = b;
			}
			else {
				result = c;
			}
		}
	}

	cout << result;

}