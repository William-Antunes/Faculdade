#include <stdio.h>
#include <stdbool.h>
#define MAX 10
typedef struct{
    int celular;
    int creditoInternet;
    int prox;
}NoPlano;
NoPlano clientes[MAX];
    int prim=-1;
    int dispo=0;
    int quant=0;


void inicializa(){
    int i;
    for(i = 0; i < MAX; i++){
        clientes[i].celular = 0;
        clientes[i].creditoInternet = 0;
        clientes[i].prox = i+1;
    }
    clientes[i-1].celular = 0;
    clientes[i-1].creditoInternet = 0;
    clientes[i-1].prox = -1;
}

bool insere(int num, int credito){
    if(dispo == -1){
        return false;
    }
    int ant = -1;
    int atual = prim;
    int novo = dispo;

    while(atual != -1 && clientes[atual].celular < num){
        ant = atual;
        atual = clientes[atual].prox;
    }

    dispo = clientes[dispo].prox;

    if(ant == -1)
        prim = novo;
    else {
        clientes[ant].prox = novo;
    }
        clientes[novo].celular = num;
        clientes[novo].creditoInternet = credito;

        clientes[novo].prox = atual;
        quant++;
        return true;
}
bool remover(int val){
    int ant = -1;
    int atual = prim;
    
    while(atual != -1 && clientes[atual].celular != val){
        ant = atual;
        atual = clientes[atual].prox;
    }
    if(atual == -1){
        return false;
    }
    else{
        if(ant == -1){
            prim = clientes[atual].prox;
        }
        else{
            clientes[ant].prox = clientes[atual].prox;
        }
        clientes[atual].prox = dispo;
        dispo = atual;
        clientes[atual].celular = 0;
        clientes[atual].creditoInternet = 0;
        quant--;
        return true;
    }
}
bool incrementa(int n, int cred){
    int pos = prim;

    while(pos != -1 && clientes[pos].celular != n){
        pos = clientes[pos].prox;
    }
    if(pos == -1) return false;

    clientes[pos].creditoInternet += cred;
    return true;
}

bool decrementa(int n, int cred){
    int pos = prim;

    while(pos != -1 && clientes[pos].celular != n){
        pos = clientes[pos].prox;
    }
    if(pos == -1) return false;

    clientes[pos].creditoInternet -= cred;
    return true;
}
void imprimirOrdenada(){
    int pos = prim;

    while(pos != -1){
        printf("%d ", clientes[pos].celular);
        pos = clientes[pos].prox;
    }
}

void imprimir(){
    int pos = prim;
    int i = 0;

    while(pos != -1){
        printf("CELULAR: %d, CREDITO: %d,  \n", clientes[pos].celular, clientes[pos].creditoInternet);
        pos = clientes[pos].prox;   
    }
  
}


int main(){
    inicializa();

    int menu = -1;
    int num, valor;

    while(menu != 0){
        printf("\nCENTRAL DE CELULAR\n\n");
        printf("(0)-sair\n");
        printf("(1)-novo plano\n");
        printf("(2)-cancela plano\n");
        printf("(3)-gasto internet\n");
        printf("(4)-venda credito\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &menu);

        switch(menu){
            case 0:
                printf("Saindo...\n");
                break;

            case 1:
                printf("Numero do celular: ");
                scanf("%d", &num);
                printf("Credito inicial: ");
                scanf("%d", &valor);
                if(insere(num, valor))
                    printf("Plano inserido com sucesso!\n");
                else
                    printf("Nao foi possivel inserir (lista cheia).\n");
                imprimir();
                break;

            case 2:
                printf("Numero do celular a cancelar: ");
                scanf("%d", &num);
                if(remover(num))
                    printf("Plano cancelado com sucesso!\n");
                else
                    printf("Celular nao encontrado.\n");
                imprimir();
                break;

            case 3:
                printf("Numero do celular: ");
                scanf("%d", &num);
                printf("Valor gasto de internet: ");
                scanf("%d", &valor);
                if(decrementa(num, valor))
                    printf("Credito debitado com sucesso!\n");
                else
                    printf("Celular nao encontrado.\n");
                imprimir();
                break;

            case 4:
                printf("Numero do celular: ");
                scanf("%d", &num);
                printf("Valor de credito comprado: ");
                scanf("%d", &valor);
                if(incrementa(num, valor))
                    printf("Credito adicionado com sucesso!\n");
                else
                    printf("Celular nao encontrado.\n");
                imprimir();
                break;

            default:
                printf("Opcao invalida.\n");
        }
    }

    return 0;
}
