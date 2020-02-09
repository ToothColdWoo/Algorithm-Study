#include <iostream>
#include<utility>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b,N;
    vector<pair<int,int>> v;
    scanf("%d",&N);
    for(int i = 0 ; i < N; i++){
        scanf("%d %d",&a, &b);
        v.push_back(make_pair(b,a));
    }

    sort(v.begin(),v.end());
    vector<pair<int,int>> ::iterator iter;
    for(iter=v.begin();iter!=v.end();iter++){
        cout<<iter->second<<' '<<iter->first<<'\n';
    }
}