#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double r;
    scanf("%lf", &r);
    printf("%.6lf\n",pow(r,2) * M_PI);
    printf("%.61lf\n",2*pow(r,2));
}