#include<iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin >> n >> m;
    int *arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }
    int result=0;
    for(int i =0; i < n-2; i++){
        for(int j =  i+1; j < n-1; j++){
            for(int k = j+1 ; k < n ; k++){
                if(arr[i] + arr[j] + arr[k] <= m && m  - (arr[i] + arr[j] + arr[k]) < m -result )
                    result = arr[i] + arr[j] + arr[k];
            }
        }
    }
    cout << result;
}