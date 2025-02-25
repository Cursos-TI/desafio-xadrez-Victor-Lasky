#include <stdio.h>
            //Implementação Recursividade do Bispo
void bispo(int numero){ //Declaração de varíavel (numero) de movimento.
   if(numero > 0){
      printf("Cima Direita\n");   //Imprime Cima e Direita.
      
      bispo(numero - 1);
   }
}
            //Implementação Recursividade da Torre
void torre(int valor){     //Declaração de varíavel (valor) de movimento.
   if(valor > 0){
      printf("Direita\n");    //Imprime direita.
      
      torre(valor - 1);
   }
}
            //Implementação Recursividade da Rainha
void rainha(int casas){       //Declaração de varíavel (casas) de movimento.
   if(casas > 0){
      printf("Esquerda\n"); //Imprime esquerda.
      
      rainha(casas - 1);
   }
}

int main() {
     // Implementação de Movimentação do Bispo.
    
   
   int numero = 5; //Declaração do número de casas do movimento.

   printf("Movimento do Bispo:\n");
   bispo(numero); //Chama a função recursiva do bispo.

    // Implementação de Movimentação da Torre.
    
    int valor = 5;   //Declaração do número de casas do movimento.

   printf("Movimento da Torre:\n");
   torre(valor);  //Chama a função recursiva do valor


    // Implementação de Movimentação da Rainha
   
    int casas = 7;  //Declaração do número de casas do movimento.

    printf("Movimento da Rainha\n");
    rainha(casas);  //Chama a função recursiva da rainha.
    
    
    
    
    int movimentocavalo=0;;//Definição do movimento do cavalo para baixo.
         for(int cima=0,direita=0;cima<2&&direita<1;cima++,direita++){//Definição de variáveis do movimento do cavalo.
            do{
              
               printf("Cima\n");//Imprime duas vezes para cima.
               
              movimentocavalo++;
            }while (movimentocavalo<2);
                
              printf("Direita\n");//Imprime uma vez para direita.
            }
        
    
    int cima = 0;
    while (cima<1){
      int direita = 0;
      while (direita<2){
         if (direita==1)
         direita++;
         continue;
      
         printf("Direita.\n");
         
      }
      printf("Cima.\n");
      cima++;
    }
    
    
    
    
    
    
    
    
    
    
    //        int cima = 0;
    //   do {
    //      int direita = 0;
    //   do{
         
    //     printf("Direita\n");
     //    direita++;
   //   }while(direita<1);
     //    printf("Cima\n");
     ///    cima++;
     // }while(cima<1);
          


   
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
