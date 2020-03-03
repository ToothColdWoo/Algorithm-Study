#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = false;
    int cntP=0, cntY=0;
    for(int i =0; i < s.size(); i++) {
        if(s[i] == 'y' || s[i] == 'Y'){
            cntY++;
        }
        else if(s[i] == 'p' || s[i] == 'P') {
            cntP++;
        }
    }
    if(cntY == cntP) {
        answer = true;
    }
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}