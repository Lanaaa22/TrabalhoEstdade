#include "system.h"
#include "consultar_time.h"
#include "consultar_partida.h"
#include "imprimir_classificacao.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>

void lobby(bdTimes *bdt, bdPartidas *bdp) {  
    setlocale(LC_ALL, "");
    printf("Escolha 1 opcao:\n\n");
    printf("1: Consultar Time\n");
    printf("2: Consultar Partidas\n");
    printf("3: Imprimir Tabela de Classificação\n");
    printf("4 - Sair do programa\n");
    printf("---------------------\n\n");
    int option;
    scanf("%d", &option); // lê a opção digitada pelo usuário
    if (option == 1) {
        LimpaTela();
        ConsultarTime(bdt, bdp);
        sleep(3);
        printf("---------------------\n\n");
        lobby(bdt,bdp);
    } 
    else if (option == 2) {
        LimpaTela();
        ConsultarPartida(bdt, bdp);
        sleep(3);
        printf("---------------------\n\n");
        lobby(bdt, bdp);
    } 
    else if (option == 3) {
        LimpaTela();
        Classificacao(bdt, bdp);
        sleep(3);
        printf("---------------------\n\n");
        lobby(bdt, bdp);
    }
    else if (option == 4) {
        LimpaTela();
        printf("Saindo do programa...\n");
        return;
    }
    else {
        LimpaTela();
        printf("Digite uma opção válida\n");
        printf("---------------------\n\n");
        lobby(bdt, bdp);
    }
}

