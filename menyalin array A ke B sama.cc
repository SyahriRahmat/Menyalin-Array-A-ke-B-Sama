#include <stdio.h>
main (){
    int A[2][3] ={11,1,97,22,12,18}, B[2][3],a,b;
    printf("Isi Variable A =\n\n");
    for (a=0;a<2;a++){
    for (b=0;b<3;b++){
        printf("%5i", A[a][b]);
    }
    printf("\n");
    }
    for (a=0;a<2;a++){
    for (b=0;b<3;b++){
    B[a][b] = A [a][b];
    }
    }
    printf("\n\nHasil Perpindahan ke Variable B = \n\n");
    for (a=0;a<2;a++){
    for (b=0;b<3;b++){
            printf("%5i", B[a][b]);
    }
    printf("\n");
    }
}
