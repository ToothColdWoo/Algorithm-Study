#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(string dartResult){
    int answer =0;
    int score = 0;
    vector<int> v;
    for(int i =0 ; i < dartResult.length(); i++){
        if(dartResult[i] == 'S' || dartResult[i] =='D' || dartResult[i] == 'T'){
            bool flag=false;
            if(dartResult[i-1] == '0' && dartResult[i-2] == '1'){
                score = 10;
            }
            else {
                score = dartResult[i-1] - '0';
            }
            if(dartResult[i] == 'D'){
                score = pow(score,2);
            }
            else if(dartResult[i] == 'T'){
                score = pow(score,3);
            }
            v.push_back(score);
        }
    }
    for(int i =0 ; i < dartResult.length(); i++) {
        if(dartResult[i] == '*'){
            v[i/3]  *= 2;
            v[i/3 -1] *= 2;
        }
        else if(dartResult[i] == '#'){
            v[i/3] *= -1;
        }
    }
    for(int i =0 ; i <v.size() ;i++){
        answer += v[i];
    }
    return answer;
}