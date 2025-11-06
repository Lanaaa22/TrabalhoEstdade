#ifndef CONSULTAR_TIME_H
#define CONSULTAR_TIME_H

#include "../TADs/tad_time.h"
#include "../TADs/tad_partida.h"

// Função de consulta
void ConsultarTime(bdTimes *bdt, bdPartidas *bdp);

int vitorias(int id, bdPartidas *bdp, bdTimes *bdt);

int empates(int id, bdPartidas *bdp, bdTimes *bdt);

int derrotas(int id, bdPartidas *bdp, bdTimes *bdt);

int golsMarcados(int id, bdPartidas *bdp, bdTimes *bdt);

int golsSofridos(int id, bdPartidas *bdp, bdTimes *bdt);

#endif