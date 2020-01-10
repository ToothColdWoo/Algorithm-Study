#include<iostream>
#include<string.h>
using namespace std;
int main() {
	char str[100];
	scanf("%s", str);
	int i = 0;
	int result = 0;
	while (str[i] != '\0') {

		if (str[i] == 'c' && str[i + 1] == '=' || str[i + 1] == '-') {
				result += 1;
				i++;
		}
		else if (str[i] == 'd') {
			if (str[i + 1] == '-') {
				result += 1;
				i++;
			}
			else if (str[i + 1] == 'z' && str[i + 2] == '=') {
				result += 1;
				i++;
				i++;
			}
			else {
				result += 1;
			}
		}
		else if ( (str[i] == 'l' &&str[i+1] == 'j') || (str[i] == 'n' && str[i + 1] == 'j') ) {
			result += 1;
			i++;
		}
		else if ( (str[i] == 's' && str[i+1] == '=') || (str[i] == 'z' && str[i + 1] == '=') ) {
			result += 1;
			i++;
		}
		else {
			result += 1;
		}

		i++;
	}
	cout << result;
}