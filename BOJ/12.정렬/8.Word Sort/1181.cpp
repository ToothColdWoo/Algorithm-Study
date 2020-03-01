#include <iostream>
#include<utility>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N;
    string str;
    vector<pair<int, string>> v;
    scanf("%d", &N);
    for(int i =0; i < N; i++){
        cin >> str;
        v.push_back(make_pair(str.length(),str));
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    vector<pair<int, string>>::iterator iter = v.begin();
    for(iter; iter!=v.end(); iter++){
        cout << iter->second << '\n';
    }
}