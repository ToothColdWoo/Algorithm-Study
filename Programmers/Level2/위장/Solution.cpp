#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    unordered_map<string,int> hash;
    for(int i = 0; i < clothes.size(); i++) {
            hash[clothes[i][1]]++;
    }
    int sum = 1;
    for(auto idx : hash) {
        sum *= idx.second + 1;
    }
    answer = sum -1;
    return answer;
}