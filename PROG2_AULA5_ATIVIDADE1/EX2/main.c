#include <stdio.h>

int main() {
    int number;
    do {
        printf("Informe um numero inteiro positivo:\n");
        scanf("%d", &number);
    } while (number <= 0);
    for(int i = 1; i<=number;i++){
        if((i % 2) == 1){
            printf("%d\n", i);
        }
    }

}
