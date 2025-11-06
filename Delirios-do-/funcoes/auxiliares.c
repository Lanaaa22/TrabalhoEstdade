#include "auxiliares.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int EprefixoTime(bdTimes *bdt, bdPartidas *bdp, char *busca, int i) {
        if (strncmp(getNomeTime(bdt, i), busca, strlen(busca)) == 0) {
            return 1;
        }
    return 0;
}

void LimpaTela() {
    #ifdef _WIN32
        system("cls"); // Para Windows
    #else
        system("clear"); // Para Linux e macOS
    #endif
}
