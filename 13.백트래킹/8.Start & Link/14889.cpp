#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#define MAX 21
using namespace std;

int N;
int arr[MAX][MAX];
vector<int> Start;
vector<int> Link;
int ans = 123456789;

int DFS(int cnt) {
    if(cnt >= N){
        if(Start.size() == Link.size()) {
            int StartSum = 0 ;
            int LinkSum = 0 ;

            for(int i= 0; i < Start.size(); i++) {
                for(int j = i+1; j < Start.size(); j++) {
                    StartSum += arr[Start[i]][Start[j]] + arr[Start[j]][Start[i]];
                }
            }

            for(int i = 0; i < Link.size(); i++) {
                for(int j = i + 1; j < Link.size(); j++) {
                    LinkSum += arr[Link[i]][Link[j]] + arr[Link[j]][Link[i]];
                }
            }
            ans = min(ans,abs(StartSum - LinkSum));
        }
        return 0;
    }
    Start.push_back(cnt);
    DFS(cnt + 1);
    Start.pop_back();

    Link.push_back(cnt);
    DFS(cnt + 1);
    Link.pop_back();

    return 0;

}
int main() {
    cin >> N;
    for(int i = 0 ; i <N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }
    DFS(0);
    cout << ans;
    return 0;
}