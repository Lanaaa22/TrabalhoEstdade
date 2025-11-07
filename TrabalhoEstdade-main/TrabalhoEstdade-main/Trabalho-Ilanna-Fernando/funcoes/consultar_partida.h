#ifndef CONSULTAR_PARTIDA_H
#define CONSULTAR_PARTIDA_H

#include "../TADs/tad_time.h"
#include "../TADs/tad_partida.h"

void ConsultarPartida(bdTimes *bdt, bdPartidas *bdp);
void timeMandante(bdTimes *bdt, bdPartidas *bdp);
void timeVisitante(bdTimes *bdt, bdPartidas *bdp);
void timeMandanteVisitante(bdTimes *bdt, bdPartidas *bdp);
int GetIDTimeIndice (bdTimes *bdt, bdPartidas *bdp, char *busca);
int EscolhaTimes(bdTimes *bdt, bdPartidas *bdp, char *busca);

#endif