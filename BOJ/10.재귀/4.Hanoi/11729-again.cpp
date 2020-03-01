#include<iostream>
#include<vector>
using namespace std;
vector<pair<int,int>> v;
void Hanoi(int n, int from, int tmp, int to) {

    if(n == 1) {
        v.push_back({from,to});
    }
    else{
        Hanoi(n-1,from,to,tmp);
        v.push_back({from, to});
        Hanoi(n-1,tmp,from,to);
    }
}
int main() {
    int N;
    cin >> N;
    Hanoi(N, 1,2,3);
    cout << v.size() << '\n';
    for(int i = 0 ; i < v.size(); i++){
        cout << v[i].first << ' '<< v[i].second;
        cout << '\n';
    }
}