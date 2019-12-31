#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int A[1000001];
    int min = -1000001;
    int max = 1000001;
    for (int i = 0; i < num; i++)
    {
        cin >> A[i];
        if (min < A[i]) min = A[i];
        if (max > A[i]) max = A[i];
    }
    cout << max << ' ' << min;
}