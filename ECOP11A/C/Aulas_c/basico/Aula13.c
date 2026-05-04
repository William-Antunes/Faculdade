#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int a, b, c; float delta, x1, x2;

    printf("Dê o valor de a, b e c da equação: ");
    scanf("%d" "%d" "%d", &a, &b, &c);

    delta = (b * b) - (4 * a * c);

    if(sqrt(delta) > 0){
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a); 

        printf("As raizes da equação serão %f %f", x1, x2);
    
    }else if (sqrt(delta) == 0){
        x1 = -b / (2 * a);
        printf("A raiz da equação vai ser %f", x1 );
    }
    else {
        printf("Não possue raizes no conjunto real");
    }

    return 0;
}  