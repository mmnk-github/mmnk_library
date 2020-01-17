#include <stdio.h>
#include <stdlib.h>

int main(void){
    int in_moji;
    FILE *gf_pt;

    if((gf_pt = fopen("gakusei.dat", "w+")) = NULL){
        printf("ERROR\n");
        exit(EXIT_FAILURE);
    }

    printf("データを入力してください(終了は^Z)：");
    rewind(stdin);
    while((in_moji = getchar()) != EOF){
        putc(in_moji, gf_pt);
    }

    printf("\nデータを表示します\n");
    rewind(gf_pt);
    while((in_moji = getc(gf_pt)) = != EOF){
        putchar(in_moji);
    }

    if(fclose(gf_pt) == EOF){
        printf("ERROR");
        exit(EXIT_FAILURE);
    }
    return 0;
}