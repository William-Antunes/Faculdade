#include <stdio.h>

int fatorial(int n){
    if(n == 0)
        return 1;
    else
        return n * fatorial(n - 1);
}


float neperiano(int n){
    float soma = 0;
    for(int i = 0; i < n; i++){
        soma += 1.0/fatorial(i);
    }
    return soma;
}

int main(){
    int valor;
    float nepe;
    printf("Escreva qual o numero n pra se calcular o número neperiano: ");
    scanf("%d", &valor);

    
    nepe = neperiano(valor);
    printf("O número neperiano até n é igual: %f", nepe);


    return 0;
}