#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int T;
	scanf("%d", &T);
	vector<int> rs;
	int j = 0;
	
	while (T--) {

		unsigned int x, y;
		scanf("%d %d", &x, &y);
		unsigned n = y - x;
		unsigned int i = 1;

		for(;;i++) {
			if (i * i > n) {
				break;
			}
		}
		unsigned int result = 0;
		if ((i-1) * (i-1) == n) {
			result  = 2 * (i-1) - 1;
		}
		else if (n >= ((i*i) - ((i - 1)*(i - 1))) / 2 + 1 + (i - 1)*(i - 1)) {
			result = 2 * i - 1;
		}
		else
			result = 2 * i - 2;

		rs.push_back(result);
	}
	for (vector<int>::iterator i = rs.begin(); i < rs.end(); i++)
		printf("%d\n", *i);
}