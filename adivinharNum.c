#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numberSecret;
    int palpite, opcao;

    printf("Menu do jogo:\n");
    printf("1 - Inicar jogo\n");
    printf("2 - Regras do jogo\n");
    printf("3 - Finalizar jogo\n");
    printf("Digite uma opção:\n");
    scanf("%d", &opcao);

    
    switch (opcao)
    {
    case 1:
        srand(time(0));
        numberSecret = rand() % 10;
        printf("Adivinhe o número secrato de 1 a 10:\n");
        scanf("%d", &palpite);
        if (palpite == numberSecret)
        {
            printf("Prabéns, você acertou o número!!!!!\n");
            printf("O número secreto é: %d", numberSecret);
        }else{
            printf("Você errou o número, tente outra vez.\n");
            printf("Você digitou: %d\n", palpite);
            printf("O número secreto é: %d\n", numberSecret);
        }
        break;
        case 2:
            printf("As regras do jogo são as seguintes:\n");
            printf("1° O jogo será iniciado e você deverá digitar um valor válido;\n");
            printf("2° O jogo não pode ser alterado;\n");
            printf("3° Terá que seguir todas as regras;\n");
            printf("4° Para sair, digite 3 no menu;");
        break;
        case 3:
            printf("Jogo Finalizado.\n");
        break;
        default:
        printf("Digite um valor válido!!");
        break;
    }    
    return 0;
}