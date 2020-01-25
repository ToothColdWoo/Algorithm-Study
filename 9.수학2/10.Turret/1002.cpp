#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double x1,x2,y1,y2;
    double r1,r2;
    int T;
    scanf("%d", &T);
    while(T--) {
        scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
        double d;
        d = sqrt(pow(x2-x1,2) + pow(y2 - y1,2));
        double r, r_prime;
        if(r1 > r2){
            r = r2;
            r_prime = r1;
        }
        else if(r1 < r2){
            r =  r1;
            r_prime = r2;
        }
        else {
            r = r1;
            r_prime = r;
        }

        if( d == 0){
            if( r_prime == r) {
                printf("-1\n");
            }
            else {
                printf("0\n");
            }
        }
        else {
            if(r + r_prime == d || r_prime - r == d){
                printf("1\n");
            }
            else if(r + r_prime < d || d < r_prime - r){
                printf("0\n");
            }
            else if (d > r_prime - r || d < r_prime + r){
                printf("2\n");
            }
        }
    }
}