#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int len = s.length();
    if(len %2 == 0) {
        answer = s.at(len/2 -1);
        answer += s.at(len/2);
    }
    else {
        answer = s.at(len/2);
    }
    return answer;
}