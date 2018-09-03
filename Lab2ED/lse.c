//
// Created by João Pedro Oliveira on 03/09/18.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lse.h"

ptLSE* cria_lista()
{
    return NULL;
}

ptLSE* insere(ptLSE* lista, int num)
{
    ptLSE *novo;
    ptLSE *ant = NULL;
    ptLSE *ptaux = lista;
    novo = (ptLSE*) malloc(sizeof(ptLSE));
    novo->numero = num;


    while ((ptaux!=NULL))
    {
        ant = ptaux;
        ptaux = ptaux->prox;
    }


    if(novo->numero% 2 == 0 || ant == NULL) {
        novo->prox = lista;
        lista = novo;
    }
    else
    {
        novo->prox = ant->prox;
        ant->prox = novo;
    }

    return lista;
}

void imprime(ptLSE* lista)
{
    ptLSE* ptaux;
    if (lista == NULL)
        printf("\nlista vazia\n");
    else
        for (ptaux=lista; ptaux!=NULL; ptaux=ptaux->prox)
            printf("\n%d\n",ptaux->numero);
}

ptLSE* destroi(ptLSE* lista)
{
    ptLSE *ptaux;
    while (lista != NULL)
    {
        ptaux = lista;
        lista = lista->prox;
        free(ptaux);
    }
    free(lista);
    return NULL;
}
