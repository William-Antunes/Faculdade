#include <stdio.h>
#include <stdlib.h>

int main() {
    int quantid = 1, n, m, x, y;


    do{
    printf("Quantos pontos você quer verificar: (0 < quantidade <= 1000 ) ");
    scanf("%d", &quantid);

    if(quantid < 0 || quantid > 1000){
        printf("Digite uma quantidade valida\n");
     } else if(quantid == 0){
            break;
    } else {

        printf("Quais os pontos de divisa do plano cartesiano (x, y): ");
        scanf("%d" "%d", &n, &m);
        if(n < -10000 || n > 10000 || m < -10000 || m > 10000){
                printf("Digite coordenadas validas (-10000 <= x, y  <= 10000)\n");
            }else {

            for(int i = 0; i < quantid; i++){
                printf("Quais os pontos cartesianos das casas (x y): ");
                scanf("%d" "%d", &x, &y);

                if(x < -10000 || x > 10000 || y < -10000 || y > 10000)
                    printf("Ponto invalido\n");
                 else if (x == n || y == m) 
                    printf("Divisa\n");
                 else if( x < n && y > m)
                    printf("NO\n");
                 else if (x > n && y > m)
                    printf("NE\n");
                else if (x < n && y < m)
                    printf("SO\n");
                else if (x > n && y < m)
                    printf("SE\n");
            }
            }

    }}while(quantid != 0);



    return 0;

}