#include <stdio.h>

enum e_mes {janeiro = 1, fevereiro, março, abril, maio, junho, julho, agosto, setembro, outubro, novembro, dezembro};

int main(){
    enum e_mes nascimento;

    printf("Digite o mes que vc nasceu: ");
    scanf("%d", &nascimento);

    switch (nascimento){
        case 1:
            printf("Vc nasceu em janeiro");
            break;
        case 2:
            printf("Vc nasceu em fevereiro");
            break;
        case 3:
            printf("Vc nasceu em março");
            break;
        case 4:
            printf("Vc nasceu em abril");
            break;
        case 5:
            printf("Vc nasceu em maio");
            break;
        case 6:
            printf("Vc nasceu em junho");
            break;
        case 7:
            printf("Vc nasceu em julho");
            break;
        case 8:
            printf("Vc nasceu em agosto");
            break;
        case 10:
            printf("Vc nasceu em outubro");
            break;
        case 11:
            printf("Vc nasceu em novembro");
            break;
        case 12:
            printf("Vc nasceu em dezembro");
            break;
        default:
            printf("Mes invalido!");
    }

    return 0;
}