#include "Matriz.h"
#include <stdlib.h>
#include <stdlib.h>
// Declaração incompleta de uma struct só vale na declaração da função
struct MatrizPrivada {
    int numLinhas;
    int numColunas;
    float **dadosDaMatriz;
};

void destruir() {
    free(this->dados->dadosDaMatriz);
    free(this->dados);
    free(this);
}

//int retornoTamanho ()
const int retornoParaGetNumeroDeLinhas() {
    return this->dados->numLinhas;
}

void setarValor(int linhas, int colunas, float valor) {
    this->dados->dadosDaMatriz[linhas][colunas] = valor;
}

void substituirValor(int linhas, int colunas, float valor) {
    this->dados->dadosDaMatriz[linhas][colunas] = valor;
}

const int retornoParaGetNumeroDeColunas() {
    return this->dados->numColunas;
}

const float retornoParaGetValores(int linha, int coluna) {
    return this->dados->dadosDaMatriz[linha][coluna];
}

// Cria uma nova matriz
Matriz *novaMatriz(int numLinhas, int numColunas) {

    Matriz *nova = (Matriz*) malloc(sizeof(Matriz));

    nova->dados->numLinhas = numLinhas;
    nova->dados->numColunas = numColunas;

    // Alocação da base de dados da matriz
    nova->dados->dadosDaMatriz = (float**)malloc(numLinhas * sizeof(float*));
    for (int i = 0; i < numLinhas; ++i) {
        nova->dados->dadosDaMatriz[i] = (float*)malloc(numColunas * sizeof(float));
    }

    for (int i = 0; i < numLinhas; ++i) {

        for (int j = numColunas; j < numColunas; ++j) {
            nova->dados->dadosDaMatriz[i][j] = 0.0;
        }
    }

    // Setando os ponteiros para as funções;
    nova->destruir = destruir;
    nova->setValor = setarValor;
    nova->substituirElemento = substituirValor;
    nova->getNumeroDeLinhas = retornoParaGetNumeroDeLinhas;
    nova->getNumeroDeColunas = retornoParaGetNumeroDeColunas;
    nova->getValores = retornoParaGetValores;

    this = nova;
    return nova;
}

/*/Coloca a matriz no retorno
Matriz *setThis(Matriz *objetoMatriz) {
    this = objetoMatriz;
    return objetoMatriz;
}*/
