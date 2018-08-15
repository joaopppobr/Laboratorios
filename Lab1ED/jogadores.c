//
// Created by João Pedro Oliveira on 15/08/18.
//

# include <stdio.h>
# include <stdlib.h>
#include <time.h>
# include "jogadores.h"

/*Função com o objetivo de atribuir valores aos dados do jogador.
O usuario pode optar por atribuir valores randomicos ou dar entrada
nos valores manualmente*/

void atribui_dados(JOGADOR *Jogador){

    srand(time(NULL));
    int c;

    puts("Digite o nome do jogador\n");
    scanf("%s", Jogador->nome);

    printf("Deseja atribuir valores aleatorios ou inserir manualmente?\n");
    printf("1: Valores aleatorios \t\t 2: Inserir manualmente\n");
    scanf("%d", &c);
    switch(c){
        case 1:
            Jogador->idade = rand() % 28;
            Jogador->num_faltas = rand() % 15;
            Jogador->num_gols = rand() % 15;
            Jogador->num_passes_corretos = rand() % 30;
            Jogador->num_passes_errados = rand() % 30;
            break;

        case 2:
            printf("Insira a idade do jogador\n");
            scanf("%d", &Jogador->idade);
            printf("Insira o numero de faltas do jogador\n");
            scanf("%d", &Jogador->num_faltas);
            printf("Insira o numero de gols do jogador\n");
            scanf("%d", &Jogador->num_gols);
            printf("Insira o numero de passes corretos do jogador\n");
            scanf("%d", &Jogador->num_passes_corretos);
            printf("Insira o numero de passes errados do jogador\n");
            scanf("%d", &Jogador->num_passes_errados);
            break;

        default:
            Jogador->idade = rand() % 28;
            Jogador->num_faltas = rand() % 15;
            Jogador->num_gols = rand() % 15;
            Jogador->num_passes_corretos = rand() % 30;
            Jogador->num_passes_errados = rand() % 30;
            break;
    }
}

// Função que exibe as estatísticas de um jogador
void exibe_estatistica(JOGADOR Jogador){

    float razao;
    razao = (float)Jogador.num_passes_corretos / (float) Jogador.num_passes_errados;

    printf("\nEstatisticas do jogador %s:\n\n", Jogador.nome);
    printf("Numero de passes corretos: %d\n", Jogador.num_passes_corretos);
    printf("Numero de passes errados: %d\n", Jogador.num_passes_errados);
    printf("Razao entre passes corretos e passes errados: %6.2f\n", razao);
    printf("Numero de gols: %d\n", Jogador.num_gols);
    printf("Numero de faltas: %d\n\n", Jogador.num_faltas);
}

/*Função que baseado nos dados do jogador e em uma fórmula de pontos
atribui uma pontuação ao jogador e com essa pontuação determina se ele
é um bom jogador ou não*/

void eh_o_bom(JOGADOR Jogador){

    float razao;
    razao = (float)Jogador.num_passes_corretos / (float) Jogador.num_passes_errados;

    float total_pontos;
    total_pontos = (((float)Jogador.num_gols * razao) * 10)/(float)Jogador.num_faltas;
    /*
        A fórmula está estruturada dessa maneira pois assim a razão entre passes
        corretos e errados funcionam como multiplicador dos gols, aumentando a pontuação
        quando a razão for maior que 1 e diminuindo quando a razão for menor que 1.
        Além disso, o número de faltas do jogador serve como um fator que diminui a pontuação
        total.
    */

    if(total_pontos > 7) { //Se a pontuação for maior que 7 o jogador é bom
        printf("\nA pontuacao do jogador e %d, o que faz dele um craque!\n", (int)total_pontos);
    }
    else{
        printf("\nA pontuacao do jogador e %d, um perna de pau!\n", (int)total_pontos);
    }

}

