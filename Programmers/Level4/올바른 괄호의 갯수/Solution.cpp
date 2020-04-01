#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int Arr[15];
    Arr[0] = 1;
    Arr[1] = 1;
    Arr[2] = 2;
    for(int i = 3; i <= n; i++){
        int sum = 0;
        for(int j = 0; j< i; j++){
            sum += Arr[j] * Arr[i-j-1];
        }
        Arr[i] = sum;
    }
    answer = Arr[n];
    return answer;
}