#include <stdio.h>
int main(void){
    struct {
        int a;
        char *s;
    } mimineko;

    mimineko.a = 3;
    mimineko.s = "Hello";

    printf("%d %s\n", mimineko.a, mimineko.s);
}