#include <string>
#include <vector>

using namespace std;
int Collatz(int num, int cnt) {
    if(num == 1){
        return cnt;
    }
    if(cnt ==500){
        return -1;
    }
    return Collatz(num & 1 ? (num*3) +1 : num /2, cnt+1);
}
int solution(int num) {
    int answer = 0;
    answer = Collatz(num, 0);
    return answer;
}