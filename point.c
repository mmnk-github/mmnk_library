// p.175~
#include <stdio.h>
int main(void){
    char *m_pt;
    int i;
    m_pt = "lucky!";
    for(i = 0; *(m_pt+i) != 0; i++)
        printf("%c", *(m_pt + i) ); // m_pt[i] は同値
    printf("\n");
    char str[100];
    scanf("%s", str);
    printf("%s", str);
    return 0;
}