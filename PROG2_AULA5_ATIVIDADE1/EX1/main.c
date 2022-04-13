#include <stdio.h>

int main() {
    int number;
    int result;
    do {
        printf("Informe um numero de 1 a 10: \n");
        scanf("%d",&number);
    }
    while (number > 10 || number < 1);
    for (int i = 1; i <= 10; i++) {
        result = number*i;
        printf("%d X %d = %d\n",number,i,result);
    }
}
