#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i = 0 ; i < s.length(); i++) {
        if(s[i] == ' '){
            continue;
        }
        char b = s[i];
        int a = b;
        a +=n;
        if(s[i] >= 'a' && s[i] <= 'z' && a > 'z') {
            a -= 26;
        }
        else if( s[i] >= 'A' && s[i] <= 'Z' && a >'Z') {
            a -= 26;
        }
        a = (char)a;
        s[i] = a;
    }
    return s;
}