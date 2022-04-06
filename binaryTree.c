#include<stdio.h>
#include "aluno.c"

typedef struct node {
    Aluno A;
    struct node* esq;
    struct node* dir;
}*No;

typedef No noRaiz;

noRaiz criarArvore();
int inserir(noRaiz);
int inserirEmLote(noRaiz);
int remover(noRaiz, Aluno a);
Aluno buscar(noRaiz, Aluno a);
void deletarArvore(noRaiz);

//Recursivo
void preordemRec(noRaiz);
void inordemRec(noRaiz);
void posordemRec(noRaiz);
void nivelRec(noRaiz);

//Iterativo
void preordemIter(noRaiz);
void inordemIter(noRaiz);
void posordemIter(noRaiz);
void nivelIter(noRaiz);

int altura(noRaiz);
int alturaDoNo(noRaiz);
void valoresEntre(int idA, int idB);

int tempoDeBusca();
int tempoDeRemocao();
int tempoDeInsercao();


int main( )
{
    Aluno K = criarAluno(10, "Kennedy Lopes\0", 9.);
    No raiz = malloc(sizeof(struct node));
    raiz->esq = 0;
    raiz->dir = 0;
    raiz->A = K;
}