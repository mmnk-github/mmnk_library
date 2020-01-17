#include <stdio.h>
#include <math.h>

double trapezoid(double xa, double xb, int n, double (*f)(double)){
    double s = 0.0;
    s += (*f)(xa);

    for (int i = 2; i <= n - 1; i++)
        s += 2 * (*f)(xa + (xb - xa) / (n-1) * (i-1));

    s += (*f)(xb);
    s /= 2;
    s *= (xb - xa) / n;
    printf("%.15f\n", s);
}

double exp(double xa){
    return xa * xa ;
}

double sqr(double xa){
    return 4 * sqrt(1 - xa * xa) ;
}

int main()
{
    int n;
    double xa, xb;
    double (*fp)(double);
    printf("input size of n=>");
    scanf("%d", &n);

    xa = 0.0;
    xb = M_PI;
    fp = sin;
    trapezoid(xa,xb,n,fp);

    xa = 0.0;
    xb = M_PI;
    fp = cos;
    trapezoid(xa,xb,n,fp);

    xa = 0.0;
    xb = 1.0;
    fp = exp;
    trapezoid(xa,xb,n,fp);

    xa = 0.0;
    xb = 1.0;
    fp = sqr;
    trapezoid(xa,xb,n,fp);

    return 0;
}
