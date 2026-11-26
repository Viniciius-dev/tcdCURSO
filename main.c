#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "menu/menu.h"
#include "models/matricula.h"
int main(void) {
    printf("Hello, World!\n");
int opcao;
    do {
         opcao = menu();
        lerOpecao(opcao);
        sleep(2); // esoera 2 segundos
        system("clear");
    }while(opcao != 0);


    return 0;
}


/*
*Guardar o retorno de menu() numa variável opcao
Chamar lerOpecao(opcao) passando essa variável
Repetir isso num loop do-while até opcao == 15 */