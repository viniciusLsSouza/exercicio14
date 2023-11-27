#include <stdio.h>

// Questão 1
int main() {
    int inteiro = 10;
    float real = 5.5;
    char caractere = 'A';

    int *ponteiroInteiro = &inteiro;
    float *ponteiroReal = &real;
    char *ponteiroChar = &caractere;

    printf("Valores antes da modificacao:\n");
    printf("Inteiro: %d, Real: %.2f, Char: %c\n", inteiro, real, caractere);

    *ponteiroInteiro = 20;
    *ponteiroReal = 8.8;
    *ponteiroChar = 'B';

    printf("\nValores apos a modificacao:\n");
    printf("Inteiro: %d, Real: %.2f, Char: %c\n", inteiro, real, caractere);

    // Questão 2
    int var1 = 5, var2 = 10;
    int *ptr1 = &var1, *ptr2 = &var2;

    printf("\nMaior endereco: %p\n", (ptr1 > ptr2) ? ptr1 : ptr2);

    // Questão 3
    int var3, var4;
    printf("\nDigite dois numeros inteiros: ");
    scanf("%d %d", &var3, &var4);

    int *ptr3 = &var3, *ptr4 = &var4;
    printf("Conteudo do maior endereco: %d\n", (*ptr3 > *ptr4) ? *ptr3 : *ptr4);

    // Questão 4
    int a, b;
    printf("\nDigite dois valores inteiros: ");
    scanf("%d %d", &a, &b);

    void trocaValores(int *x, int *y) {
        int temp = *x;
        *x = *y;
        *y = temp;
    }

    trocaValores(&a, &b);
    printf("Valores trocados: A = %d, B = %d\n", a, b);

    // Questão 5
    int num1, num2;
    printf("\nDigite dois valores inteiros: ");
    scanf("%d %d", &num1, &num2);

    void retornaMaiorMenor(int *x, int *y) {
        int temp;
        if (*x < *y) {
            temp = *x;
            *x = *y;
            *y = temp;
        }
    }

    retornaMaiorMenor(&num1, &num2);
    printf("Maior valor: %d, Menor valor: %d\n", num1, num2);

    // Questão 6
    int valorA, valorB;
    printf("\nDigite dois valores inteiros: ");
    scanf("%d %d", &valorA, &valorB);

    int somaDobro(int *x, int *y) {
        *x = 2 * (*x);
        *y = 2 * (*y);
        return *x + *y;
    }

    int resultado = somaDobro(&valorA, &valorB);
    printf("Resultado da soma do dobro: %d\n", resultado);

    // Questão 7
    int numA = 7, numB = 3;

    void calculaSoma(int *x, int y) {
        *x = *x + y;
    }

    calculaSoma(&numA, numB);
    printf("\nValores modificados: A = %d, B = %d\n", numA, numB);

    // Questão 8
    float arrayFloat[10];
    printf("\nEnderecos do array de float:\n");
    for (int i = 0; i < 10; i++) {
        printf("%p\n", &arrayFloat[i]);
    }

    // Questão 9
    int matrizInt[3][3];
    printf("\nEnderecos da matriz de inteiros:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%p\n", &matrizInt[i][j]);
        }
    }

    // Questão 10
    int arrayInt[5];
    printf("\nDigite cinco valores inteiros para o array: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arrayInt[i]);
    }

    printf("Dobro de cada valor lido:\n");
    int *ptrArray = arrayInt;
    for (int i = 0; i < 5; i++) {
        printf("%d\n", 2 * *(ptrArray + i));
    }

    return 0;
}