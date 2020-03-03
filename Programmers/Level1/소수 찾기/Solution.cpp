#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    bool arr[1000001];
    for(int i = 2; i <= n ; i++) {
        arr[i] = true;
    }
    for(int i = 2 ; i * i <= n; i++)  {
        if(arr[i]) {
            for(int j = i*i; j <=n; j+=i) {
                arr[j] = false;
            }
        }
    }
    for(int i = 1; i <= n; i++)
    if(arr[i]){
        answer++;
    }
    return answer;
}