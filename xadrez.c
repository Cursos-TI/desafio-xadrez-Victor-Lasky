#include <stdio.h>


int main() {
     // Implementação de Movimentação do Bispo.
    //Declaração de variáveis.
    int bispo,torre,rainha;
    bispo=1;//Declaração da variável.
   
    while(bispo<=5)//Move até 5 casas para cima e direita.
   {
    printf("Cima Direita\n");//imprime direção do movimento.
         bispo++;
   }

    // Implementação de Movimentação da Torre.
    torre=1;//Declaração da variável.
    do
    {
       printf("Direita\n");//imprime declaração do movimento.
       torre++;
    } while (torre<=5);//Move 5 casas a direita.
    


    // Implementação de Movimentação da Rainha
   for(rainha=1;rainha<=8;rainha++)//Declaração de variável,condição,
   {
    printf("Esquerda\n");//Imprime declaração de movimento.
   }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
