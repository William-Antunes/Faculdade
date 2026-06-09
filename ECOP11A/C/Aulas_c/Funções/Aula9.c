#include <stdio.h>

int triangulo(float n1, float n2, float n3){
    if(n1 < n2 + n3 && n2 < n1 + n3 && n3 < n1 + n2){
        return 1;
    } else
        return 0;
}

void tipotriangulo(float n1, float n2, float n3){
    if(triangulo(n1, n2, n3) == 1){
    if(n1 == n2 && n2 == n3)
         printf("O triangulo é equilatero");
    else if(n1 == n2 || n2 == n3 || n3 == n1 )
        printf("O triangulo é isoseceles");
    
    else
        printf("O triangulo é escaleno");
    }else
        printf("Não é um triangulo");
}

int main(){
    float n1, n2, n3;
    printf("Diga quais os valores do triangulo: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    tipotriangulo(n1, n2, n3);

    return 0;
    
}