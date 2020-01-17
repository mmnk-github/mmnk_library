#include <stdio.h>
#include <stdlib.h>

int main(void){
    char file_name[100];
    FILE *file_pt;
    printf("fileName:");
    scanf("%s", file_name);
    if((file_pt = fopen(file_name, "r+")) == NULL){
        printf("fileOpenError\n");
        exit(EXIT_FAILURE);
    }

    // 何かしらの処理
    

    if(fclose(file_pt) == EOF){
        printf("fileCloseError\n");
        exit(EXIT_FAILURE);
    }
    return 0;
}




