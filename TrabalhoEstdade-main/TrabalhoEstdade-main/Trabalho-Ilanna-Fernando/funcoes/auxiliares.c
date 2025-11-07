#include "auxiliares.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void LimpaTela() {
    #ifdef _WIN32
        system("cls"); // Para Windows
    #else
        system("clear"); // Para Linux e macOS
    #endif
}
