# ⚽ Campeonato Computacional de Futebol (Parte 1)
#### Sistema de gerenciamento de campeonatos de futebol em C, com funcionalidades de consulta de times, partidas e classificação.

### Colaboradores:
- Fernando Bitarães (BitArrays) Stela Montenegro
- Ilanna dos Reis Cardoso

## 📂 Estrutura do Projeto

```
Trabalho-Ilanna-Fernando
├── main.c
├── Makefile
│
├── funcoes
│   ├── system.c
│   ├── auxiliares.c
│   ├── consultar_time.c
│   ├── consultar_partida.c
│   ├── imprimir_classificacao.c
│   │
│   ├── system.h
│   ├── auxiliares.h
│   ├── consultar_time.h
│   ├── consultar_partida.h
│   ├── imprimir_classificacao.h
│
├── TADs
│   ├── tad_partida.c
│   ├── tad_partida.h
│   ├── tad_time.c
│   └── tad_time.h
│
└── arquivos
    ├── partidas_completo.csv
    ├── partidas_vazio.csv
    ├── partidas_parcial.csv
    └── times.csv
```

## 👾 Compilação e Execução

#### Pré requisito:


- Instalar o pacote que contém o compilador GCC e o Make, além de outras bibliotecas necessárias para o desenvolvimento para Ubuntu:

```bash
sudo apt install build-essential
```

##### Escrever os comandos após abrir o terminal na `pasta` do programa:
#### Compilar com o `make`:

```bash
make
```

#### Limpando arquivos temporários:

```bash
make clean
```

#### Compilando manualmente:

``` bash
gcc main.c funcoes/system.c funcoes/auxiliares.c funcoes/consultar_time.c funcoes/consultar_partida.c funcoes/imprimir_classificacao.c  TADs/tad_time.c TADs/tad_partida.c -Ifuncoes -ITADs -o programa
```

``` bash
./programa
```

## 🎲 Estrutura de Dados

`Struct Partida`

```c
struct partida {
    int id;          // Identificador da partida
    int Time1id;     // ID do primeiro time
    int Time2id;     // ID do segundo time
    int GolsTime1;   // Gols marcados pelo primeiro time
    int GolsTime2;   // Gols marcados pelo segundo time
};
typedef struct partida Partida; 
```
`Struct bdPartidas`

```c

#define MAX_PARTIDAS 90
struct bdpartida {
    Partida *p[MAX_PARTIDAS];
    int qtd;
}; // Definição do dado Partida para representar uma informação de partida
typedef struct bdpartida bdPartidas; // Tipo bdPartidas (banco de dados de partidas)
```

`Struct Time`

```c
struct time {
    int id;          // ID dos times
    char nome[50];   // Nome do time
};
typedef struct time Time;       // Tipo Time
```

`Struct bdTimes`
```c
#define MAX_TIMES 45
struct bdtimes {
    Time *t[MAX_TIMES];
    int qtd;
}; // Estrutura que representa o banco de dados de times
typedef struct bdtimes bdTimes; // Tipo bdTimes (banco de dados de times)
```

## 🪄 Funcionalidades

| Função                     | Arquivo                  | Descrição                                               |
|-----------------------------|-------------------------|---------------------------------------------------------|
| `lobby(bdTimes *bdt, bdPartidas *bdp)`                   | system.c                | Exibe o menu inicial com as opções principais.         |
| `ConsultarTime(bdTimes *bdt, bdPartidas *bdp)`           | consultar_time.c        | Busca e exibe informações sobre um time.               |
| `ConsultarPartida(bdTimes *bdt, bdPartidas *bdp)`        | consultar_partida.c     | Mostra os dados de uma partida específica.            |
| `Classificacao(bdTimes *bdt, bdPartidas *bdp)`   | imprimir_classificacao.c| Exibe a tabela de classificação atualizada.           |
| `LimpaTela()`               | auxiliares.c            | Limpa a tela do terminal, adaptável ao sistema operacional. |

## 🏹 Exemplo de Uso

```bash
Escolha 1 opção:

1: Consultar Time
2: Consultar Partidas
3: Imprimir Tabela de Classificação
4: Sair do programa
---------------------
```

#### Entrada:

```bash
1
```

#### Saída:

``` bash
Digite o nome do time ou prefixo:
```

#### Entrada:

``` bash
JAVA
```

#### Saída:

``` bash
ID   Time         V   E   D   GM   GS    S   PG
0    JAVAlis      6   2   1   24   12   12   20
```

## ♟️ Futuras melhorias

→   Atualizar partida<br>
→   Remover partida<br>
→   Inserir partida<br>

## 🪫 Conclusão
Assim, com a leitura do README, é possível compreender o programa profundamente e executá-lo. **Obrigado(a) pela atenção!**

![TexasLonghornsHookEmGIF](https://github.com/user-attachments/assets/8a0a8798-c4c8-43e6-bc48-c52bfce1ec0d)
