#ifndef BOM_H
#define BOM_H

/****************************/
#include "Matriz.h"
/****************************/

// DEFININDO TIPO BOLEANO
typedef int bool;
#define true 1
#define false 0
// DEFININDO TIPO BOLEANOFIM


inline const bool eQuadrada(Matriz const *matrizP) { (matrizP->getNumeroDeLinhas() == matrizP->getNumeroDeColunas()) ? true : false; }
const bool eDiagonal(Matriz const *matrizP);
const bool eIdentidade(const Matriz *matrizP);
const bool saoIguais(Matriz const *matrizA, Matriz const *MatrizB);
const bool eSimetrica(Matriz const *matrizP);
//bool eVetor(Matriz const *matrizP) const;

//float escalar(Matriz const *matrizP) const;

//Matriz *inversa(Matriz const *matrizP) const;
const Matriz *tranposta(Matriz const *matrizP);
//Matriz *determinante(Matriz const *matrizP) const;
//Matriz *adcaoDeMatrizes(Matriz const *matrizA, Matriz const *matrizB) const;
//Matriz *produtoNumeroMatriz(float numero, Matriz const *matrizP) const;
//Matriz *produtoDeMatrizes(Matriz const *matrizA, Matriz const *matrizB) const;

#endif // BOM_H
