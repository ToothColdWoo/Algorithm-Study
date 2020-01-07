#include <iostream>
#include <string>
using namespace std;
int main(){
    string input;
    int len;
    int count = 1;
    getline(cin,input);
    len = input.length();
    for(int i=1;i<len;i++){
        if(input[i] == ' '){
            if(input[i] != input[i-1]){
                count++;
            }
        }
    }
    if(input[len-1] == ' '){
        count --;
    }
    cout<<count;
}