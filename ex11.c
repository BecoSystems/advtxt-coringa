#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void usarBuzina() {
    printf("Você usou a buzina! Ela é magica e mandou o batman para outra dimensao.\n");
    printf("O Batman fica confuso e você consegue escapar!\n");
}

void usarTaco() {
    printf("Você usou o taco de beisebol! Você tenta atingir o Batman.\n");
    printf("Mas ele esta podre e quebra quando voce tenta usar - O batman pegou voce!\n");
}

int main() {
    int escolha;

    printf("O Coringa está tentando fugir do Batman!\n");
    printf("Escolha um objeto para usar:\n");
    printf("1. Buzina\n");
    printf("2. Taco de beisebol\n");
    printf("Digite 1 ou 2: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            usarBuzina();
            break;
        case 2:
            usarTaco();
            break;
        default:
            printf("Escolha inválida! O Batman te pega enquanto você hesita!\n");
    }

    return 0;
}

