// BancoWhile.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    //std::cout << "Hello World!\n";

    int saque = 0, total = 0, notas = 0, nota = 100;

    printf("Qual valor deseja sacar? \n");

    scanf_s("%d", &saque);
    total = saque;

    while (true) {
        if (total >= nota) {
            total -= nota;
            notas += 1;  
        }
        else {
            if (notas >= 1) {
                printf("\n Total de %d notas de %d.", notas, nota);
            }
            if (nota == 100) {
                nota = 50;
                notas = 0;
            }
            else if (nota == 50) {
                nota = 10;
                notas = 0;
            }
            else if (nota == 10) {
                nota = 5;
                notas = 0;
            }
            else if(nota == 5){
                nota = 1;
                notas = 0;
            }
            if (total == 0) {
                break;
            }
        }
    }

    printf("\n\n\n");

}

