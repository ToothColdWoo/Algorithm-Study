#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool compare(const pair<int,double>& a, const pair<int,double>& b) {
    if(a.second == b.second) {
        return a.first < b.first;
    }
    return a.second > b.second;
}
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<int,double>> v;
    for(int i = 1 ;i <= N;i++) {
        double size=0;
        double cnt = 0;
        for(int j = 0; j < stages.size(); j++) {
            if(stages[j] >= i){
                size++;
            }
            if(stages[j] == i) {
                cnt++;
            }
        }
        if(size == 0 ) {
            v.push_back(make_pair(i,0));
        }
        else {
        double d = cnt / size;
        v.push_back(make_pair(i,d));    
        }
        
    }
    sort(v.begin(),v.end(), compare);
    for(int i =0; i < v.size(); i++) {
        answer.push_back(v[i].first);
    }
    return answer;
}