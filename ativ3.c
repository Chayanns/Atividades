#include <stdio.h>


int print(int i) {
    if (i == 20) {
        printf("Mostrando a função para %d\n", i);
        return 1; 
        // Retorna 1 para indicar que foi mostrado
    } else {
        printf("Não mostrando a função para %d\n", i);
        return 0; 
        // Retorna 0 para indicar que não foi mostrado
    }
}


int main(void) {
    int a = 20;
   
    if (print(a)) { 
        //* Chamada da função print e verificação do retorno
        printf("Eu serei mostrado!\n");
    } else {
        printf("Eu não serei mostrado!\n");
    }


    return 0;
}


