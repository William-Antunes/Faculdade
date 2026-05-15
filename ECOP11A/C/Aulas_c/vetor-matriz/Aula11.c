#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetorN[1000], T, j = 0;


    scanf("%d", &T);

    for(int i = 0; i < 1000; i++){

        printf("N[%d] = %d\n", i, j);

        if(j == T - 1)
            j = 0;
        j++;
    }
    return 0;
}