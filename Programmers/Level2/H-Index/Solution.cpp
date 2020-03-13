#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(),citations.end(),greater<int>());
    int i =0;
    while( i < citations.size()) {
        if(citations[i] <= i) break;
        i++;
    }
    return i;
}