#include <stdio.h>
#include <string.h> //文字列操作
#include <stdlib.h> //qsortがある

//long long int は18桁までオッケー
//出力時は %lld で！

int cmp_int(const void*, const void*);

int cmp_int(const void* v1, const void* v2)
{
  const int _v1 = *((const long long int*)v1);
  const int _v2 = *((const long long int*)v2);
 
  if ( _v1 > _v2 ) {
    return 1;
  } else if ( _v1 < _v2 ) {
    return -1;
  } else {
    return 0;
  }
}

int main(void){

    //小さい順にソート
    //x = 配列名
    //n = 要素数
    //sizeof(int) = 配列の型
    /*

    qsort(x, n, sizeof(int), cmp_int);
    
    */
    return 0;
}