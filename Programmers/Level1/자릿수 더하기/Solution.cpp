#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    int i = 10;
    while( n > 0) {
        answer += n % i;
        n = n / i;
    }
    return answer;
}