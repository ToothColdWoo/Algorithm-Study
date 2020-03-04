#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int tmp = x;
    bool answer = true;
    vector<int> v;
    while(tmp > 0 ){
        int a = tmp % 10;
        v.push_back(a);
        tmp /= 10;
    }
    int cnt=0;
    for(int i = 0; i < v.size(); i++) cnt += v[i];
    
    
    return x % cnt ==0? true : false;
}