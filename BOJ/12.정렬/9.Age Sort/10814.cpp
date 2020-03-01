#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int,string> u, pair<int,string> v){
    return u.first < v.first;
}
int main() {
    int N;
    scanf("%d",&N);
    vector<pair<int,string>> v(N);
    for(int i = 0 ; i < N; i++){
        cin >> v[i].first >> v[i].second;
    }
    stable_sort(v.begin(),v.end(),compare);

    for(int i =0 ; i < N; i++){
        cout << v[i].first << " " << v[i].second << "\n";
    }
}