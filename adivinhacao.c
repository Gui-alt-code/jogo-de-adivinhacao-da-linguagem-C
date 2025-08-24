#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	// imprime o cabecalho do nosso jogo

    // No desenho abaixo, nós devemos usar duas barras (\\) para o compilador entender que nós não estamos tentando chamar um caractére especial (\n). Ademais, nesse contexto, \\ signfica imprima uma barra.

    printf("\n\n");
    printf("          P  /_\\  P                               \n");
    printf("         /_\\_|_|_/_\\                             \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao      \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação!  \n");
    printf("    |" "  |  |_|  |"  " |                          \n");
    printf("    |_____| ' _ ' |_____|                          \n");
    printf("          \\__|_|__/                               \n");
    printf("\n\n");

    // A função time(0) retorna o número de segundos desde 1970.
    // Usar esse número como semente garante que os números gerados sejam diferentes a cada execução.
    int segundos = time(0);
    
    // A função srand() inicializa o gerador de números aleatórios.
    // A 'semente' (segundos) é o valor de partida para a geração.
    srand(segundos);

    int numerogrande = rand();

	// int numerosecreto = 42; Variável Inicializada: É aquela que recebe um valor no momento da sua declaração. No exemplo int numerosecreto = 42;, a variável numerosecreto é do tipo inteiro e recebe o valor 42 no momento em que é criada.

	int chute; // Variável Não Inicializada: É aquela que é declarada, mas não recebe um valor inicial. No exemplo int chute;, a variável chute é do tipo inteiro, mas não recebe nenhum valor inicial.

    int numerosecreto = numerogrande % 100; // essa linha de código pega um número grande (numerogrande) e usa o resto da divisão por 100 para criar um número secreto (numerosecreto) que está sempre entre 0 e 99.

    int tentativas = 1;

    double pontos = 1000;

    int acertou = 0;

    int nivel;
    printf("Qual o nível de dificuldade? \n");
    printf("(1) Fácil | (2) Médio | (3) Difícil\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerotentativas;

    switch (nivel)
    {
    case 1:
        numerotentativas = 20;
        break;
    case 2:
        numerotentativas = 15;
        break;
    default:
        numerotentativas = 6;
        break;
    }

    // if(nivel == 1) {
    //     numerotentativas = 20;
    // }

    // else if (nivel == 2) {
    //     numerotentativas = 15;
    // }

    // else {
    //     numerotentativas = 6;
    // }

        for(int i=1; i <= numerotentativas; i++) {

        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");
            
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute < 0) {
            printf("Você não pode chutar números negativos!\n");
            continue; // O continue serve para que o i++ começe a testar o código novamente, logo, pulando todo o código abaixo de if (chute < 0), caso, a condição seja atendida
        }

        acertou = (chute == numerosecreto);
        int maior = (chute > numerosecreto);

        if (acertou) {
            break;
        } 

        else if (maior) {
            printf("Seu chute foi maior que o número secreto\n");
        } 
            
        else {
            printf("Seu chute foi menor que o número secreto\n");
        }

        tentativas++;

        double pontosperdidos = abs(chute - numerosecreto) / (double)2; // Apenas pelo fato de ter adicionado um .0 no dois, o compilador já vai entender que está diante de um double, paralelamente, deve-se entender que o compilador lê o código da direita para a esquerda, resolvendo, antes, primeiramente (chute - numerosecreto) / 2 e depois declarando a variável, armazenando seu resultado. Agora, devido ao 2.0 o compilador vai enteder que está lidando com um double em um primeiro momento.

        pontos = pontos - pontosperdidos;

        }

        printf("Fim de jogo!\n");

        if(acertou) {

            printf("\n\n");
            printf("             OOOOOOOOOOO               \n");
            printf("         OOOOOOOOOOOOOOOOOOO           \n");
            printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
            printf("    OOOOOO      OOOOO      OOOOOO      \n");
            printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
            printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
            printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
            printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
            printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
            printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
            printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
            printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
            printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
            printf("         OOOOOO         OOOOOO         \n");
            printf("             OOOOOOOOOOOO              \n");
            printf("\n\n");


            printf("Você ganhou!\n");
            printf("Você acertou em %d tentativas!\n", tentativas);
            printf("Total de pontos: %.1f\n", pontos); // A máscara %.1f é utilizada para exibir apenas uma casa decimal e %.2f é utilizada para exibir duas casas decimais.
        } else {
            printf("Você perdeu! Tente de novo!\n");

            printf("\n\n");
            printf("       \\|/ ____ \\|/    \n");
            printf("        @~/ ,. \\~@      \n");
            printf("       /_( \\__/ )_\\    \n");
            printf("          \\__U_/        \n");
        }
}