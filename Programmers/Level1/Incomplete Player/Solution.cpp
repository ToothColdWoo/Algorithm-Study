#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> hashmap;
    string answer = "";
    for(auto val : completion) {
        if(hashmap.end() == hashmap.find(val)) {
            hashmap[val] = 1;
        }
        else {
            hashmap[val]++;
        }
    }
    for(auto val : participant) {
        if(hashmap.end() == hashmap.find(val)) {
            return val;
        }
        else {
            hashmap[val]--;
            if(hashmap[val] < 0) {
                return val;
            }
        }
    }
}