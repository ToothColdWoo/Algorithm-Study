logo
코딩테스트 연습
정렬
K번째수
다른 사람의 풀이
이찬우 이찬우
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(int i = 0;  i< commands.size(); i++) {
        int a, b ,c;
        a = commands[i][0];
        b = commands[i][1];
        c = commands[i][2];
        vector<int> result;
        for(a; a <= b; a++){
            result.push_back(array[a-1]);
        }
        sort(result.begin(),result.end());
        answer.push_back(result[c-1]);
    }

    return answer;
}