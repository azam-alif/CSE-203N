#include<stdio.h>

int main(){
    int mat1[2][2]={{1, 2}, {3, 4}}, mat2[2][2]={{5, 6}, {7, 8}}, sum[2][2];
    int i, j;
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
