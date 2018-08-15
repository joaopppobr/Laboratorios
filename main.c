//
// Created by João Pedro Oliveira on 15/08/18.
//
# include <stdio.h>
# include <stdlib.h>
# include "jogadores.h"

int main() {
    JOGADOR Jogador;
    atribui_dados(&Jogador);
    exibe_estatistica(Jogador);
    eh_o_bom(Jogador);
    return(0);
}