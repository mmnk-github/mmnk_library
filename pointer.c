#include <stdio.h>

int main(void){
    int a;
    char b;
    float c;

    a = 5;
    b = 'c';
    c = 3.14;

    int *pa;
    pa = &a;
    printf("a = %d\n", a);
    printf("a = %d\n", *pa);
    printf("&a = %x\n", &a);
    printf("&a = %x\n", pa);

    char *pb;
    pb = &b;
    printf("b = %c\n", b);
    printf("b = %c\n", *pb);
    printf("&b = %x\n", &b);
    printf("&b = %x\n", pb);

    float *pc;
    pc = &c;
    printf("c = %f\n", c);
    printf("c = %f\n", *pa);
    printf("&c = %x\n", &c);
    printf("&c = %x\n", pc);

    printf("aのメモリサイズは%dです\n", sizeof(a));
    printf("bのメモリサイズは%dです\n", sizeof(b));
    printf("cのメモリサイズは%dです\n", sizeof(c));

    char str[100];
    scanf("%s", &str[1]); // scanf("%s", str);
    // 0 1 2 3 4 5 ...
    //   h e l l o ...
    str[0] = 'h';
    // ? h e l l o ...
    printf("%s\n", str);

    int d = 7;
    int*v;
    int *w, x;
    int* y, z;

    v = &d;
    w = &d;
    x = &d; // NG
    y = &d;
    z = &d; // NG
    
    printf("v = %x, *v = %d", v, *v);
    printf("w = %x, *w = %d", w, *w);
    printf("x = %x, *x = %d", x, *x);
    printf("y = %x, *y = %d", y, *y);
    printf("z = %x, *z = %d", z, *z);

    return 0;
}