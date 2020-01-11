#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cin >> a>>b>>c;
    int cost;
    cost = c - b;
    if(cost<=0)
    cout << "-1" << endl;
    else
    cout << a/ cost+1;
}