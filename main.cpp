/* 
 * File:   main.cpp
 * Author: rafael
 *
 * Created on 10 de Junho de 2016, 10:29
 */

#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

using namespace std;

int i = 0;

void modulo_1() {
    printf("1 - Programas C\n");

    printf("1.7 - Exibindo Informações na tela: printf()\n");

    printf("\ti = %d\n", i);
    i += 1;
    printf("\ti = %d\n", i);

    printf("\n");

#define PRECO 1.99 

    int pera = 3;
    char qualidade = 'A';
    float peso = 2.5;

    printf("\tExistem %d peras de qualidade %c ", pera, qualidade);
    printf("\tpesando %f quilos.\n", peso);
    printf("\tO preco por quilo e %f, total e %f\n\n", PRECO, peso * PRECO);

    printf("\tExemplo errado: %f\n", 3.1324159);


    printf("1.8 - Lendo Informação: scanf()\n");

    int idade;

    printf("\tEntre sua idade: ");
    scanf("%d", &idade);

    printf("\tVoce tem %d anos\n", idade);


    int dia, mes, ano;

    printf("\tEntre com a data do seu aniversario (dd mm aa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    printf("\tVoce nasceu em %2d/%2d/%2d\n", dia, mes, ano);


    printf("1.9 - Lendo Informação: scanf()\n");

    //* programa que calcula o perímetro e a área de uma
    //   circunferência de raio R (fornecido pelo usuário) *

#define  PI  3.14159

    ///* Definir variaveis *
    int Raio;
    float Perim, Area;

    //* Obter Raio da circunferencia *
    printf("\tEntre com o valor do raio: ");
    scanf("%d", &Raio);

    //* Calcular Perimetro do Circulo *
    Perim = 2 * PI * Raio;

    //* Calcular Area da Circunferencia *
    Area = PI * pow(Raio, 2);

    //* Exibir Resultados *
    printf("\tO perimetro da circunferencia de raio %d eh %.2f  \n", Raio, Perim);
    printf("\te a area eh %.2f\n", Area);

    printf("\n\n\n\n");
}

void modulo_2() {
    printf("Módulo 2\n\n\n\n");
}

void menu() {
    char opcao = 0;
    while (opcao != 's') {
        printf("Curso de Linguagem C\n\n");
        printf("Selecione a opção desejada:\n");
        printf("1 - Módulo 1\n");
        printf("2 - Módulo 2\n");
        printf("s - Sair\n\n");
        printf("Opção: ");
        scanf("%c", &opcao);

        switch (opcao) {
            case '1':
                modulo_1();
                break;
            case '2':
                modulo_2();
                break;
            case 's':
                break;
            default:
                printf("Opção inválida!!!\n\n");
                break;
        }
    }
}

int main(int argc, char** argv) {
    menu();
    return 0;
}