#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lse.h"

int main() {

    ptLSE *lista;
    int num;

    lista = NULL;


    cria_lista();

    do{
        printf("Insira um numero\n");
        scanf("%d", &num);
        lista = insere(lista, num);
    }while(num!=0);

    imprime(lista);

    lista=destroi(lista);
    imprime(lista);


    return 0;
}