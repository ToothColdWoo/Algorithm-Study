#include<iostream>
using namespace std;
int main() {
    int N, M; //가로 : M, 세로 : N
    scanf("%d %d", &N, &M);
    char arr[50][50];
    char arrW[8][8];
    char arrB[8][8];
    for(int i = 0 ; i < 8; i++){
        for(int j = 0 ; j < 8; j++){
            if( (i + j) % 2 == 0 ){
                arrW[i][j] = 'W';
                arrB[i][j] = 'B';
            }
            else{
                arrW[i][j] = 'B';
                arrB[i][j] = 'W';
            }
        }
    }
    for(int i = 0 ; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr[i][j];
        }
    }
    int result = 64;

    for(int i = 0; i+7 < N; i++){
        for(int j = 0; j +7 < M; j++){
            int tmp = 0;
            int cnt1 = 0;
            int cnt2 = 0;
            for(int k = 0; k < 8; k++){
                for(int l = 0; l < 8; l++) {
                        if(arr[i+k][j+l] != arrW[k][l]){
                            cnt1++;
                        }
                        if(arr[i+k][j+l] != arrB[k][l]){
                            cnt2++;
                        }
                }
            }

            if(cnt1 < cnt2){
                tmp = cnt1;
            }
            else{
                tmp = cnt2;
            }
            if(result >= tmp)
            result = tmp;
        }
    }

    printf("%d",result);
}
