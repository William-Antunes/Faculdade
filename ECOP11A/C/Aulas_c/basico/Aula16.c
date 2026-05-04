#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
        printf("Digite dois numeros: ");
        scanf("%d %d", &num1, &num2);

        if (num1 < num2){
            while(num1 < num2){
                if(num1 % 2 != 0)
                    printf("%d\n", num1);
                num1++;
            }
        }
        if (num1 > num2){
            while(num1 > num2){
                if(num2 % 2 != 0)
                    printf("%d\n", num2);
                num2++;
            }
        }
    



    return 0;
}