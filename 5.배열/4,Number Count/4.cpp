#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >>c;
    
    int result = a*b*c;
    
    int array[10] = {0};
    while(result > 0) {
        array[result%10]++;
        result /= 10;
    }
    for(int i =0; i < 10; i++)
        printf("%d\n",array[i]);
}