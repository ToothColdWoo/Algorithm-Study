#include<iostream>
using namespace std;
int main() {
	int hour, minute;
	cin >> hour >> minute;
	if (minute - 45 < 0) {
		hour -= 1;
		if (hour < 0)
			hour += 24;
		minute = 60 + (minute - 45);
	}
	else
		minute -= 45;
	cout << hour << " " << minute;
}