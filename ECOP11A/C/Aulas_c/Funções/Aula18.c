#include <stdio.h>

int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
    
}

int fibo(int n){
    int vetor[n + 1] ;
    vetor[0] =0 ;
    vetor[1] = 1;


    for(int i = 2;i <= n; i++){
        vetor[i] = vetor[i-1] + vetor[i-2];
    }

    return vetor[n];
}


int main(){
    int num;

    printf("Diga qual valor de fibonacci calcular: ");
    scanf("%d", &num);

    printf("O fibonacci de %d é: %d (não recursiva)\n", num, fibo(num));
    printf("O fibonacci de %d é: %d", num, fibonacci(num));

    return 0;
}