#include<stdio.h>
#include<stdlib.h>

struct no
{
    int **tabuleiro;
    struct no *cima;
    struct no *baixo;
    struct no *esq;
    struct no *dir;
};
typedef struct no PUZZLE;

void inicializar(PUZZLE **T,int dim)
{
    int i,j;

    PUZZLE* jogo=(PUZZLE*) malloc(sizeof(PUZZLE));
    jogo->tabuleiro=(int**)malloc(dim * sizeof(int*)); 
    srand(0); 
    for (i = 0; i < dim; i++)
    { 
        jogo->tabuleiro[i] = (int*) malloc(dim * sizeof(int)); 
        for (j = 0; j < dim; j++)
        {
            jogo->tabuleiro[i][j] =rand() % dim*dim +1 ; 
            printf(" %d ",jogo->tabuleiro[i][j]);
        }
        printf("\n");
    }
    jogo->tabuleiro[dim-1][dim-1]=NULL;
}
int main()
{
    PUZZLE *jogo;
    int dim;
    printf("Escolha a dimensão do tabuleiro:");
    scanf("%d",&dim);
    inicializar(&jogo,dim);
    return 0;
}