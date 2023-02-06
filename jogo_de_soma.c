#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int i = 1, j = 1 , resposta;
    int erros = 0, acertos = 0;

    char opcao;

    inicio:
            for(j = 1; j < 10; j++){
                printf("Qual a resposta %d + %d?", i, j);
                scanf("%d", &resposta);
                getchar();

                if( resposta != (i + j)){
                    erros++;
                    printf("Resposta incorreta!\n");
                    printf("sua pontuacao ate agora: acerto %d e erros %d\n", acertos, erros);
                } else {
                    acertos++;
                    printf("Resposta correta!\n");
                    printf("sua pontuacao ate agora: acerto %d e erros %d\n", acertos, erros);
                }
            }

    meio:
            printf("Continuar respondendo? S para Sim ou N para nao: ");
            opcao = toupper(getchar());
            getchar();

            printf("\n");

            switch(opcao)
            {
                case 'S':
                    i++;
                    goto inicio;
                    break;
                case 'N':
                    goto fim;
                    break;
                default:
                    printf("Opcao invalida\n");
                    goto meio;
            }

    fim:
        printf("sua pontucao foi: %d certas e %d erradas\n", acertos, erros);
    system("PAUSE");
    return 0;
}