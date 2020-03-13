#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for(int i = 0;  i < arr1.size(); i++){
        int result = arr1[i] | arr2[i];
        int div = pow(2,n-1);
        
        string str;
        while(div >= 1) {
            if(result - div < 0) {
                str.push_back(' ');
            }
            else if(result - div >=0){
                str.push_back('#');
                result -= div;
            }
            
            div /= 2;
        }
        answer.push_back(str);
    }
    return answer;
}