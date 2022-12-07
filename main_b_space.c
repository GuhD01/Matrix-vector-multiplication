#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"

int main(){
    int N;
    printf("N:\n");
    scanf("%d", &N);
    int m[N*N];
    int v[N];
    int r[N];
    initMat(m, N);
    initVec(v, N);
    while(1){
        matVecMult(m, v, r, N);
    }
    return 0;
}