#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"

int main(){
    int N, i;
    printf("Matrix size:\n");
    scanf("%d", &N);
    
    if(N <= 1){
        printf("error \n");
        return 0;
    }
    else{
    int *m = (int *) malloc(N*N*sizeof(int));
    int *v = (int *) malloc(N*sizeof(int));
    int *r = (int *) malloc(N*sizeof(int));

    printf("matrix values:\n");
    for(i = 0; i < N*N; i++){
        scanf("%d", &m[i]);
    }
    printf("Matrix = ");
    printMat(m, N);

    printf("\n Vector values:\n");
    for(i = 0; i < N; i++){
        scanf("%d", &v[i]);
    }
    printf("\nVector = ");
    printVec(v, N);

    matVecMult(m, v, r, N);

    printf("\nResult = ");
    printVec(r, N);

    free(m);
    free(v);
    free(r);


    }
    return 0;
}
