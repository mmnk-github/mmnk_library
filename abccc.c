#include <stdio.h>
int main(void){
    char seireki[11] = {};
    scanf("%s", seireki);
    if(seireki[5] == '1'){
        puts("TBD");
    }else if(seireki[6] == '1' || seireki[6] == '2' || seireki[6] == '3' || seireki[6] == '4'){
        puts("Heisei");
    }else{
        puts("TBD");
    }
    return 0;
}