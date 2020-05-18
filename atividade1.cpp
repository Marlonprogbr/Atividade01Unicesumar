#include <stdio.h>
#include <stdlib.h>
int main(){
    int lanche;

    printf("------------------------------------------\n");
    printf("|            Lanchonete do Kiko          |\n");
    printf("------------------------------------------\n");
    printf("| Digite o numero do lanche que deseja:  |\n");
    printf("|\t 1 - X-Bacon                     |\n");
    printf("|\t 2 - X-Salada                    |\n");
    printf("------------------------------------------\n");
    
    scanf("%d",&lanche);
    


    switch (lanche)
    {
    case 1:
    printf("----------------------------------------\n");
    printf("|Seu lanche escolhido: X-Bacon r$18,00 |\n");
    printf("----------------------------------------");
        break;
    case 2 : 
    printf("----------------------------------------\n");
    printf("|Seu lanche escolhido: X-Salada r$15,00 |\n");
    printf("----------------------------------------");
        break;
    default: printf("Numero digitado invalido");
        break;
    }


}
    
