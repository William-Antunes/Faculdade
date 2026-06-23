#include <stdio.h>


int recebeValor(int valor){
    int invertido = 0;

    while(valor > 0){
        invertido = invertido * 10 + valor % 10;
        valor /= 10;
    }
    return invertido;
}


int main(){
    int valor;

    printf("Digite um valor inteiro pra ser invertido: ");
    scanf("%d", &valor);

    printf("O valor invertido é: %d", recebeValor(valor));

    return 0;
}
