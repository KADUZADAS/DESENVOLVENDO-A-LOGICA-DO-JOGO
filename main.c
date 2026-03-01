#include <stdio.h>

/*
    Programa: Desenvolvendo a lógica de jogo!
    objettivo: Simular um pequeno jogo de pontos usando estrutura de decisão e repetição
*/    
    int main(){

    int escolha;
    int pontos = 0;
    int resposta;
    
    // Aqui estou colocando um titulo simples de jogo
    printf("=== JOGO DE LOGICA ===\n");
    
    // Aqui é o menu inicial, a entrada que o jogador verá
    printf("1 - jogar\n");
    printf("2 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);
    
    // Nessa fase o programa ira verificar se o jogador escolheu jogar
    if(escolha == 1){
        // O jogo terá o um loop de 5 rodadas
        for(int rodada = 1; rodada <= 5;rodada++){
            printf("\nRodada %d\n",rodada);
            // Aqui é uma simulação de açao do jogador
            printf("Digite 1 para ganhar ponto ou 0 para perder: ");
            scanf("%d",&resposta);
            
            // Verifica a resposta do jogador
            if(resposta == 1){
                pontos++;
                printf("Você ganhou 1 ponto!\n");
            }
        else{ printf("Você perdeu está rodada.\n");
        }
        }
        // Mostrar o resultado final
        printf("\n=== FIM DO JOGO ===\n");
        printf("Total de pontos:  %d\n",pontos);
    }
    else{
        printf("\nPrograma encerrado pelo usuario.\n");
    }
    
            
      return 0;
      }
