//
// Created by João Pedro Oliveira on 15/08/18.
//

#ifndef LAB1ED_JOGADORES_H
#define LAB1ED_JOGADORES_H

typedef struct{

    char nome[80];
    int idade;
    int num_gols;
    int num_faltas;
    int num_passes_errados;
    int num_passes_corretos;

}JOGADOR;

void atribui_dados(JOGADOR *Jogador);

void exibe_estatistica(JOGADOR Jogador);

void eh_o_bom(JOGADOR Jogador);

#endif //LAB1ED_JOGADORES_H
