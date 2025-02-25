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
    
    
    
    
       //Definição do movimento do cavalo para baixo.
         for(int cima = 0,direita = 0;cima < 2 && direita < 1;cima++){//Definição de multiplas variáveis do movimento do cavalo.
           int cima = 0;
            do{
             
              printf("Cima.\n");//Imprime duas vezes para cima.
               
              cima++;
            }while (cima<2);
                
              printf("Direita.\n");//Imprime uma vez para Direita.
              direita++;
            }
        
    
          //Movimento do bispo com loops aninhados.
               int cima = 1;
               while (cima < 2) {
                  printf("Cima\n"); //O printf sobe algumas linhas, para ser impresso primeiro.
                   cima++;
                   int direita = 1;
                   while (direita < 2) {
                       printf("Direita\n"); //Imprime uma vez para Direita.
                       direita++;
                   }
                   
               }


    return 0;
}
