#include <stdio.h>

void calcula(int *a, int *b){
    int aux = *a;
    *a = *a + *b;
    *b = aux - *b;
}

int main(){
    int num1, num2;

    printf("Digite 2 numeros pra fazer os calculos: ");
    scanf("%d %d", &num1, &num2);

    calcula(&num1, &num2);

    printf("%d %d", num1, num2);
}