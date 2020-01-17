#include <stdio.h>
#include <math.h>

//関数ポインタを引数にとる
double call(double (*fp)(double),double);

int main(){
    double (*fp)(double);
    double (*fps[])(double) = {sin,cos};

    //関数ポインタの使用例
    fp = sin;
    printf("sin(0.1)=%lf\n",(*fp)(0.1));
    fp = cos;
    printf("cos(0.2)=%5lf\n",(*fp)(0.2));
    //関数ポインタ配列の使用例
    printf("sin(0.3)=%lf\n",(*fps[0])(0.3));
    printf("cos(0.4)=%lf\n",(*fps[1])(0.4));
    //関数ポインタを引数に取る関数の使用例
    printf("sin(0.5)=%lf\n",call(sin,0.5));
    printf("cos(0.6)=%lf\n",call(cos,0.6));
    return 0;
}

double call(double (*fp)(double),double x){
    return (*fp)(x);
}