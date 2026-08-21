#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void func(int v[], int i, int n){

    if(i == n)
        return;

        printf("%d ", v[i]);
        imprime(v, i+1, n);


}

int main(){

    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    func(vetor, 0, 10);
    return 0;
}
