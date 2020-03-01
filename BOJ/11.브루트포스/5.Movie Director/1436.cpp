#include<iostream>
#include<string>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    int cnt = 0;
    int i = 666;
    int result = 0;
    while(1){
        string str_i =to_string(i);
        int findNum = str_i.find("666");
        if(findNum>=0){
            cnt++;
        }
        if(n == cnt){
            result = i;
            break;
        }
        i++;
    }
    printf("%d",result);
}