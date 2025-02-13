#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

        int palpite, pc, menu;

            srand(time(0));

    pc = rand() % 3;

            printf("Menu Jogo Jokepô:\n");
            printf("1 - Iniciar jogo.\n");
            printf("2 - Regras do jogo.\n");
            printf("3 - Sair do jogo.\n");
            printf("Digite sua opção:\n");
            scanf("%d", &menu);

    switch (menu)
    {
    // Jogo em andamento
    case 1:
            printf("Jogo Jokepô:\n");
            printf("1 - Papel.\n");
            printf("2 - Pedra.\n");
            printf("3 - Tesoura.\n");
            printf("Digite sua opção:\n");
            scanf("%d", &palpite);
    
    switch (palpite)
    {
    case 1:
        if (pc == 0)
        {
            printf("Você ganhou!! \n");
            printf("Você deu Papel. \n");
            printf("Computador deu Pedra.\n");
        }else if (pc == 1)
        {
            printf("Você Perdeu!! \n");
            printf("Você deu Papel. \n");
            printf("Computador deu Tesoura.\n");        
        }else{
            printf("Jogo empatado!! \n");
            printf("Você deu Papel. \n");
            printf("Computador deu Papel.\n");
        }
        break;
        case 2:
        if (pc == 0)
        {
            printf("Você ganhou!! \n");
            printf("Você deu Pedra. \n");
            printf("Computador deu Tesoura.\n");
        }else if (pc == 1)
        {
            printf("Você Perdeu!! \n");
            printf("Você deu Pedra. \n");
            printf("Computador deu Papel.\n");        
        }else{
            printf("Jogo empatado!! \n");
            printf("Você deu Pedra.\n");
            printf("Computador deu Pedra.\n");
        }
        break;
        case 3:
        if (pc == 0)
        {
            printf("Você ganhou!! \n");
            printf("Você deu Tesoura. \n");
            printf("Computador deu Papel.\n");
        }else if (pc == 1)
        {
            printf("Você Perdeu!! \n");
            printf("Você deu Tesoura. \n");
            printf("Computador deu Pedra.\n");        
        }else{
            printf("Jogo empatado!! \n");
            printf("Você deu Tesoura. \n");
            printf("Computador deu Tesoura.\n");
        }
        break;   
    default:
            printf("Digite um valor válido!!");
        break;
    }break;
    // Regras do jogo
    case 2:
            printf("Você derverá escolher uma das opções acima\n");
            printf("Você ganhará quando: \n");
            printf("Pedra qubrar tesoura.\n");
            printf("Papel embrulhar pedra. \n");
            printf("Tesoura cortar papel. \n");
            printf("Melhor de 3 é o vencedor.\n");
    break;
    // Jogo Finalizado
    case 3:
            printf("Saindo do jogo. \n");
            printf("Jokepô_Dev. \n");
            printf("Gamme vicio.\n");
    break;
    default:
           printf("Digite um valor válido!!!");
    break;
}
    return 0;

}