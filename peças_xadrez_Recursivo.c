#include <stdio.h>

void MoverTorre(int i){
    // Mover a Torre 5 casas para a direita
    if (i > 0) {
        printf("Direita\n");  //imprime a direção do movimento
        MoverTorre(i - 1); // Chamada recursiva com o número decrementado
    }
}
void MoverBispo(int i){
    while (i > 0) //loop externo vertical
    {
        printf("Cima\n");  //imprime a direção do movimento
        for (int i = 1; i < 2; i++) //loop interno horizontal
        {
            printf("Direita\n");  //imprime a direção do movimento
        }
        i--; // Decrementa i para evitar loop infinito
    }  
}
void MoverRainha(int i){
    // Mover a Rainha 8 casas para a esquerda
    if (i > 0) {
        printf("Esquerda\n");  //imprime a direção do movimento
        MoverRainha(i - 1); // Chamada recursiva com o número decrementado
    }
}
void MoverCavalo(){
    // Mover o Cavalo 2 casas para cima e 1 para a direita
    for (size_t i = 1; i < 4; i++)
    {
        if (i == 2) continue; //pula direto apara o proximo i
        printf("Cima\n");  //imprime a direção do movimento
        while (i == 3)
        {
            printf("Direita\n"); // Imprime a direção do movimento
            break;
        }
    }
}
int main (){
    
    printf("\n----  Movendo a Torre 5 casas para a Direita:  ----\n");
    MoverTorre(5);
    printf("\n----  Movendo o Bispo 5 casas para a diagonal Cima Direita:  ----\n");
    MoverBispo(5);
    printf("\n----  Movendo a Rainha 8 casa para a Esquerda:  ----\n");
    MoverRainha(8);
    printf("\n----  Movendo o Cavalo 2 casas para Cima e 1 para a Direita:  ----\n");
    MoverCavalo();
    printf("\n----  Fim do movimento das peças de xadrez.  ----\n");
    
    return 0;
}