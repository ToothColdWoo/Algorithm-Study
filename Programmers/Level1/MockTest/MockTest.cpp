#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int arr1[5] = {1,2,3,4,5};
    int arr2[8] = {2,1,2,3,2,4,2,5};
    int arr3[10] = {3,3,1,1,2,2,4,4,5,5};
    
    int max1=0,max2=0,max3 = 0;
    for(int i = 0 ; i < answers.size(); i++) {
        if( arr1[i%5] == answers[i]) {
            max1++;
        }
        if( arr2[i%8] == answers[i]) {
            max2++;
        }
        if( arr3[i%10] == answers[i]) {
            max3++;
        }
    }
    int result = max(max1,max(max2,max3));
    if(max1 == result) {
        answer.push_back(1);
    }
    if(max2 == result) {
        answer.push_back(2);
    }
    if(max3 == result) {
        answer.push_back(3);
    }

    return answer;
}