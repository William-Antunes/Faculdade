#include <stdio.h>


typedef struct {
    int x,y;
}ponto;

typedef struct{
    ponto se, id;
} retangulo;

int calculaArea(retangulo p){
    int area = (p.id.x - p.se.x) * (p.id.y - p.se.y);
    return area;
}

int main(){
    retangulo ret;

    printf("Dê o valor dos vértices opostos de um retangulo: ");
    scanf("%d %d %d %d", &ret.se.x, &ret.se.y, &ret.id.x, &ret.id.y);


    printf("A área do retangulo é: %d\n", calculaArea(ret));
    
    return 0;
}




