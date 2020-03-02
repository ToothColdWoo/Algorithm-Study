#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int arr[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
    string Day[367];
    Day[0] = "THU";
    Day[1] ="FRI";
    Day[2] ="SAT";
    Day[3] = "SUN";
    Day[4] = "MON";
    Day[5] = "TUE";
    Day[6] = "WED";
    Day[7] = "THU";

    for(int i = 8; i < 367;i++) {
        Day[i] = Day[i%7] ;
    }

    int result=0;
    if(a > 1) {
        for(int i = 1; i < a; i++) {
            result += arr[i];
        }
    }
    result +=  b;

    answer = Day[result];

    return answer;
}