#include <stdio.h>

#include <math.h>

double  trapezoid(double, double, int, double (*f)(double));

double xx(double x)
{
    return x * x;
}

double harada(double x)
{
    return sqrt(16 * (1 - x * x));
}

int main(void)
{

    int n;

    double xa, xb, x, sum = 0.0;

    double (*f)(double);

        xa = 0;

    xb = 1;

    n = 10000;

    f = harada;

    printf("%lf\n", trapezoid(xa, xb, n, f));

    return 0;
}

double  trapezoid(double xa, double xb, int n, double (*f)(double))
{

    double sum = 0.0;

    double a = (xb - xa) / (n - 1); // 幅

    for (int i = 0; i < n; i++)
    {
        double p = (*f)(xa + a * i); // 左側

        double q = (*f)(xa + a * (i + 1)); // 右側

        sum += (p + q) * a; // 台形の面積
    }

    return sum / 2;
}
