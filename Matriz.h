#ifndef MATRIZ_H
#define MATRIZ_H
// Declaração incompleta de uma struct só vale na declaração da função
typedef struct MatrizPrivada MatrizPrivada;

typedef struct Matriz {
	// Atributos
	MatrizPrivada* dados;

	// Métodos
	void (*destruir)();
	void (*setValor)(int numLinha, int numColuna, float valor);
	void (*substituirElemento)(int numLinha, int numColuna, float valor);
	int (*getNumeroDeLinhas)();
	int (*getNumeroDeColunas)();
	float (*getValores)(int numLinha, int numColuna);
}Matriz;

// Cria uma nova matriz
Matriz *novaMatriz(int numLinhas, int numColunas);

// Retorna a própria matriz que chama a função
Matriz *this;

//Coloca a matriz no retorno
Matriz *setThis(Matriz *objetoMatriz);

//http://www.hardware.com.br/comunidade/declarar-int/255555/

#endif // MATRIZ_H

/* Site referencia
https://murilo.wordpress.com/2009/08/05/como-programar-em-c-orientado-a-objetos/
*/
