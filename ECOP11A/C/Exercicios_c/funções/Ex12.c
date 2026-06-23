#include <stdio.h>

void fibonacci(int num){
    int seq[num];
    seq[0] = 0;
    seq[1] = 1;

    for(int i = 2; i <= num; i++){
        seq[i] = seq[i-1] + seq[i-2];
    }

    for(int i = 0; i <= num; i++){
        printf("%d ", seq[i]);
    }
}

int main(){
    int num;

    printf("Digita o numero pra ver a sequencia de fibonacci até esse número: ");
    scanf("%d", &num);

    fibonacci(num);
}