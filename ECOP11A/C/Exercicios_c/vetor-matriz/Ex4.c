#include <stdio.h>
#include <stdlib.h>

int matriz[6][6];

int main(){
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(i == 2 || j == 4){
                matriz[i][j] = 1;
            } else
            matriz[i][j] = 0;
        }
    }

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}