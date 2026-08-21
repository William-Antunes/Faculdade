#include <stdio.h>
#include <stdlib.h>
#include <time.h>


float calcula(int n){
    float harmonico = 0;

    for(int i = 1; i <= n; i++){
        harmonico += 1.0/i;
    }
    return harmonico;
}

int main(){
    int n;

    scanf("%d", &n);

    printf("%.2f", calcula(n));

    return 0;
}