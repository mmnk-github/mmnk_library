#include <stdio.h>
#include <math.h>

int main(){
    int n;
    double xa,xb;
    printf("input size of n=>");
    scanf("%d",&n);

    xa = 0.0;
    //xb = M_PI;
    xb = 1.0;

    double s = 0.0;
    //s = sin(xa);
    s = xa*xa;

    for (int i = 2; i <= n-1; i++){
        //s += 2*sin(xa + (xb - xa) / (n-1) * (i-1));
        s += 2 * (xa + (xb - xa) / (n-1) * (i-1)) * (xa + (xb - xa) / (n-1) * (i-1));
    }
    
    //s += sin(xb);
    s /= 2;
    s *= (xb - xa) / n;
    printf("%.15f",s);

    return 0;
}