#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int f(int n){
    return (n - 1) / 2;
}

double* shell_sort_double(double *array, int n){
    for (int h = f(n); h >= 1; h = f(h)){
        for (int g = 0; g < h; g ++){
            for (int i = g; i < n; i += h){
                for (int j = i; j >= g; j -= h){
                    if(j-h < 0){
                        break;
                    }
                    if(array[j-h] > array[j]){
                        // printf("%.1lf <-> %.1lf\n", array[j - 1], array[j]);
                        double temp = array[j-h];
                        array[j-h] = array[j];
                        array[j] = temp;
                    }else{
                        break;
                    }
                }
            }
        }
    }
    return array;
}

int main(void){
    clock_t c1, c2;
    srand((unsigned)time(NULL)); // rand() de ransu deru
    
    double *array;
    int n;
    n = 1000000;

    printf("n = %d\n", n);

    array = malloc(sizeof(double) * n);
    for (int i = 0; i < n; i ++){
        array[i] = (double)(rand() % 1000) + (double)(rand() % 100) / 100.0;
        // printf("%.1lf\n", array[i]);
    }
    puts("");

    c1 = clock();
    array = shell_sort_double(array, n);
    c2 = clock();

    for (int i = 0; i < n; i ++){
        // printf("%lf\n", array[i]);
    }
    puts("");
    printf("time is %lfs.\n", (double)(c2 - c1) / CLOCKS_PER_SEC);

    free(array);

    return 0;
}