#include <stdio.h>

int main (){
// Mover o Cavalo 2 casas para baixo e 1 para a esquerda
    printf("\n----####  Movendo o Cavalo 2 casas para baixo e 1 para a esquerda:  ####----\n");
    for (int i = 1; i <= 2 ; i++)
    {
        printf("Baixo\n");  //imprimere a direção do movimento
        while (i == 2) // Verifica se i é igual a 2
        {
            printf("Esquerda\n"); // Imprime a direção do movimento
            break; // Encerra o loop while após imprimir "Esquerda"
        }   
    }

return  0;
}