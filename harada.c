#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// is_sorted は配列vecが(asc?昇順:降順)にソート済みなら1を返します
int is_sorted(int n, int* vec, int asc){
    for(int i = 0; i < n-1; i ++){
        if(asc == 1 && vec[i] > vec[i+1]) return 0;
        if(asc == 0 && vec[i] < vec[i+1]) return 0;
    }
    return 1;
}

// selection_sort は配列をバブルソートでソートします
void selection_sort(int n, int* vec, int asc){
    for(int i = 0; i < n-1; i ++){
        int selected_index = i;
        for(int j = i+1; j < n; j ++){
            if(asc == 1 && vec[j] < vec[selected_index]){
                selected_index = j;
            }else if(asc == 0 && vec[j] > vec[selected_index]){
                selected_index = j;
            }
        }
        int work = vec[i];
        vec[i] = vec[selected_index];
        vec[selected_index] = work;
    }
    return ;
}

int main(void){
    srand((unsigned)time(NULL));
    int n = rand() % 10;
    n += 2;
    printf("%d\n", n);
    int* vec;
    vec = malloc(sizeof(int) * n);

    for(int i = 0; i < n; i ++){
        vec[i] = rand() % 1000;
        printf("%d, ", vec[i]);
    }
    printf("\n\n");

    selection_sort(n, vec, 0);


    for(int i = 0; i < n; i ++){
        printf("%d, ", vec[i]);
    }
    printf("\n");
    
    free(vec);
    
    return 0;
}