#include <stdio.h>
//#include "TADs/tad_time.h"
//#include "TADs/tad_partida.h"
#include "funcoes/system.h"
#include <locale.h>

int main() {
    //FUNÇÕES PARA TIME
    setlocale(LC_ALL, "");
    //cria o bdTime
    bdTimes *bdtime = createBDTimes();
    //Carrega os times no arquivo e insere em bdtime
    extraiArquivoTimes(bdtime);
    //imprime bdtime
    //printBDTimes(bdtime);
    
    //FUNÇÕES PARA PARTIDA
    bdPartidas *bdpartida = createBDPartidas();

    extraiArquivoPartidas(bdpartida);

    //printBDPartidas(bdpartida);
    LimpaTela();
    lobby(bdtime, bdpartida);
    //desaloca memória de bdtime e bdpartida
    liberaBDTimes(bdtime);
    liberaBDPartidas(bdpartida);


    return 0;
}