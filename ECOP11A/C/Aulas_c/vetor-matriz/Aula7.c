#include <stdio.h>
#include <stdlib.h>

int main(){
    int Matriz_ident[10][10];

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(i == j){
                Matriz_ident[i][j] = 1;
            }
            else
                Matriz_ident[i][j] = 0;
        }
    }

    printf("Matriz identidade: \n");
    

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d ", Matriz_ident[i][j]);
        }
        printf("\n");
    }



    return 0;
}