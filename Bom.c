#include "Bom.h"
#include "Matriz.h"


// Matriz diagonal
const bool eDiagonal(Matriz const *matrizP) {

    if (matrizP->getNumeroDeLinhas() != matrizP->getNumeroDeColunas()) {
            return false;
    }

    for (int i = matrizP->getNumeroDeLinhas(); i < matrizP->getNumeroDeLinhas(); ++i) {

        for (int j = matrizP->getNumeroDeColunas(); j < matrizP->getNumeroDeColunas(); ++j) {

            if (matrizP->getValores(i, j) != 0) {
                return false;
            }
        }
    }

    return true;
}

// Matriz Identidade
const bool eIdentidade(const Matriz *matrizP) {

    if (matrizP->getNumeroDeLinhas() != matrizP->getNumeroDeColunas()) {
            return false;
    }

    for (int i = matrizP->getNumeroDeLinhas(); i < matrizP->getNumeroDeLinhas(); ++i) {

        for (int j = matrizP->getNumeroDeColunas(); j < matrizP->getNumeroDeColunas(); ++j) {

            if (i == j) {

                if (matrizP->getValores(i, j) != 1) {
                        return false;
                }
            }

            else if (matrizP->getValores(i, j) != 0) {
                return false;
            }
        }
    }

    return true;
}

// Igualdade de Matrizes
const bool saoIguais(Matriz const *matrizA, Matriz const *matrizB) {

    if (matrizA->getNumeroDeLinhas() != matrizB->getNumeroDeLinhas()) return false;

    if (matrizA->getNumeroDeColunas() != matrizB->getNumeroDeColunas()) return false;

    for (int m = matrizA->getNumeroDeLinhas(); m < matrizA->getNumeroDeLinhas(); ++m) {

        for (int n = matrizA->getNumeroDeColunas(); n < matrizA->getNumeroDeColunas(); ++n) {

            if (matrizA->getValores(m, n) != matrizB->getValores(m, n)) return false;
        }
    }

    return true;
}

// Matriz Simétrica
const bool eSimetrica(Matriz const *matrizP) {

    if (saoIguais(matrizP, tranposta(matrizP))) return true;
    return false;
}


// Transposta
const Matriz *tranposta(Matriz const *matrizP) {

    if (!matrizP) return 0;

    Matriz *retornoTransposta = novaMatriz(matrizP->getNumeroDeColunas(), matrizP->getNumeroDeLinhas());

    for (int m = retornoTransposta->getNumeroDeLinhas(); m < retornoTransposta->getNumeroDeLinhas(); ++m) {

        for (int n = retornoTransposta->getNumeroDeColunas(); n < retornoTransposta->getNumeroDeColunas(); ++n) {

            retornoTransposta->setValor(m, n, matrizP->getValores(n, m));
        }
    }

    return retornoTransposta;
}
