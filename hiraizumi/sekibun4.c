#include <stdio.h>
#include <math.h>

double simpson(double xa, double xb, int n, double (*f)(double)){
    double s = 0.0;
    s += (*f)(xa);

    // for (int i = 2; i <= n - 1; i++)
    //     s += 2 * (*f)(xa + (xb - xa) / (n-1) * (i-1));

    // s += (*f)(xb);
    // s /= 2;
    // s *= (xb - xa) / n;

    for (int i = 1; i < (n-1)/2; i++)
        s += 4 * (*f)((xb-xa)/6);
    for (int i = 0; i < (n-1)/2 - 1; i++)
        //hogehoge
    
    s += (*f)(xb);
    s /= 3;
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
    if(n%2 == 0){
        printf("invalid number\n");
        return 0;
    }

    xa = 0.0;
    xb = M_PI;
    fp = sin;
    simpson(xa,xb,n,fp);

    xa = 0.0;
    xb = M_PI;
    fp = cos;
    simpson(xa,xb,n,fp);

    xa = 0.0;
    xb = 1.0;
    fp = exp;
    simpson(xa,xb,n,fp);

    xa = 0.0;
    xb = 1.0;
    fp = sqr;
    simpson(xa,xb,n,fp);

    return 0;
}
