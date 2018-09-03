//
// Created by João Pedro Oliveira on 03/09/18.
//

#ifndef LAB_2ED_LSE_H
#define LAB_2ED_LSE_H

typedef struct ptLSE{
    int numero;
    struct ptLSE *prox;
} ptLSE;

ptLSE* cria_lista();
ptLSE* insere(ptLSE* lista, int num);
void imprime(ptLSE* lista);
ptLSE* destroi(ptLSE* lista);


#endif //LAB_2ED_LSE_H
