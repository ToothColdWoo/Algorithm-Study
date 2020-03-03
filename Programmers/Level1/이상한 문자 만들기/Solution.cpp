#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool flag =false;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' ') {
            flag = false;
        }
        else if(!flag) {
            s[i] = toupper(s[i]);
            flag = true;
        }
        else if(flag){
            s[i] = tolower(s[i]);
            flag =false;
        }
    }
    return s;
}