#include <stdio.h>
#include <locale.h>

int Primo(int numero) {
    if (numero <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    setlocale(LC_ALL, "");
    int num1, num2, num3;


    printf("Digite três números:");
    scanf("%d %d %d", &num1, &num2, &num3);

    int maior;

    if (num1 >= num2 && num1 >= num3) {
        maior = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        maior = num2;
    } else {
        maior = num3;
    }

    printf("O maior número é: %d\n", maior);

    if (Primo(maior)) {
        printf("O maior número é primo.\n");
    } else {
        printf("O maior número não e primo.\n");
    }

    return 0;
}
