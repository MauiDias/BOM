#ifndef MENU_H
#define MENU_H

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#include "Bom.h"


void MenuBom (void) {
    int opcao = -1;

    printf ("######### Biblioteca de Opera��es Matriciais #########\n\n\n");

    // OP��ES DO MENU ##############################################
    printf ("[01]: ADI��O\n");
    printf ("[02]: SUBTRA��O\n");
    printf ("[03]: UM NUMERO POR UMA MATIZ\n");
    printf ("[04]: MULTIPLICA��O\n");
    printf ("[05]: TRANSPOSTA\n");
    printf ("[06]: TRANSPOSTA DA MULTIPLICA��O\n");
    printf ("[07]: DETERMINANTE\n");
    printf ("[08]: PRODUTO INTERNO\n");
    printf ("[09]: CLASSIFICA��O E PROPRIEDADES\n");
    printf ("[10]: A DEFINIR\n");
    printf ("[11]: A DEFINIR\n");
    printf ("[12]: A DEFINIR\n");
    printf ("[13]: A DEFINIR\n");
    printf ("[14]: A DEFINIR\n");
    printf ("[00]: SAIR\n\n\n");

    printf ("Escolha uma op��o: ");
    scanf ("%d", &opcao);

    switch (opcao) {
    case 0:
        printf("\n################################################"
               "\n################### OBRIGADO! ##################"
               "\n################################################\n\n");
        system("pause");
        break;

    case 1:
        printf("\n################################################"
               "\n################### OBRIGADO! ##################"
               "\n################################################\n\n");
        system("pause");
        break;

    case 2:
        printf("\n################################################"
               "\n################### OBRIGADO! ##################"
               "\n################################################\n\n");
        system("pause");
        break;



    case 3:
        printf("\n################################################"
               "\n################### OBRIGADO! ##################"
               "\n################################################\n\n");
        system("pause");
        break;



    case 4:
        printf("\n################################################"
               "\n################### OBRIGADO! ##################"
               "\n################################################\n\n");
        system("pause");
        break;



    case 5:
        printf("\n################################################"
               "\n################### OBRIGADO! ##################"
               "\n################################################\n\n");
        system("pause");
        break;



    case 6:
        printf("\n################################################"
               "\n################### OBRIGADO! ##################"
               "\n################################################\n\n");
        system("pause");
        break;



    case 7:
        printf("\n################################################"
               "\n################### OBRIGADO! ##################"
               "\n################################################\n\n");
        system("pause");
        break;



    case 8:
        printf("\n################################################"
               "\n################### OBRIGADO! ##################"
               "\n################################################\n\n");
        system("pause");
        break;



    case 9:
        printf("\n################################################"
               "\n################### OBRIGADO! ##################"
               "\n################################################\n\n");
        system("pause");
        break;



    case 10:
        printf("\n################################################"
               "\n################### OBRIGADO! ##################"
               "\n################################################\n\n");
        system("pause");
        break;



    case 11:
        printf("\n################################################"
               "\n################### OBRIGADO! ##################"
               "\n################################################\n\n");
        system("pause");
        break;



    case 12:
        printf("\n################################################"
               "\n################### OBRIGADO! ##################"
               "\n################################################\n\n");
        system("pause");
        break;



    case 13:
        printf("\n################################################"
               "\n################### OBRIGADO! ##################"
               "\n################################################\n\n");
        system("pause");
        break;



    case 14:
        printf("\n################################################"
               "\n################### OBRIGADO! ##################"
               "\n################################################\n\n");
        system("pause");
        break;


    default:
        printf ("OP��O INEXISTENTE.\n"
               "TENTE NOVAMENTE:");
        system("pause");
        break;
    }
}
#endif // MENU_H
