#include <stdio.h>

int main() {
    int number;
    int i = 1;
    do {
        printf("Informe um numero inteiro positivo:\n");
        scanf("%d", &number);
    } while (number <= 0);
    while (i<=number){
        if((i % 2) == 1){
            printf("%d\n", i);
        }
        i++;
    }

}
