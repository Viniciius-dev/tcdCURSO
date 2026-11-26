//
// Created by oproprio on 9/25/26.
//

#include "menu.h"
#include <stdio.h>


void exibirCabecalho() {
    printf("\n");
    printf("========================================\n");
    printf("        SISTEMA DE GERENCIAMENTO       \n");
    printf("             DE CURSOS                 \n");
    printf("========================================\n");
    printf("\n");
}

int menu() {
    int opcao;
    exibirCabecalho();
    printf("1.  Cadastrar matricula\n");
    printf("2.  Listar matriculas\n");
    printf("3.  Buscar matricula pelo codigo\n");
    printf("4.  Buscar pelo nome do aluno\n");
    printf("5.  Alterar dados\n");
    printf("6.  Excluir matricula\n");
    printf("7.  Calcular media das notas\n");
    printf("8.  Listar alunos aprovados\n");
    printf("9.  Listar alunos reprovados\n");
    printf("10. Ordenar matriculas\n");
    printf("11. Busca sequencial\n");
    printf("12. Busca binaria\n");
    printf("13. Salvar dados\n");
    printf("14. Carregar dados\n");
    printf("15. Sair\n");
    printf("========================================\n");
    printf("Digite uma opcao: ");
    scanf("%d", &opcao);

    return opcao;
}

 int lerOpecao(int opcao) {

    switch (opcao) {
        case 1:
         matricula();
            break;
            case 2:
         //   ListaMatriculas();
            break;
            case 3:
          //  BuscarMatricula();
            break;
            case 4:
         //   BuscarPelo();
            break;
            case 5:
         //   AlterarDados();
            break;
            case 6:
         //   ExcluirMatricula();
            break;
            case 7:
         //   CalcularMedia();
            break;
            case 8:
          //  ListarAlunos();
            break;
            case 9:
         //   ListarAlunosReprovados();
            break;
            case 10:
         //   ListarAlunosAprovados();
            break;
            case 11:
         //   ListarAlunosReprovados();
            break;
            case 12:
          //  ListarAlunosAprovados();
            break;
            case 13:
        //    ListarAlunosReprovados();
            break;
            case 14:
         //   ListarAlunosAprovados();
            break;
            case 15:
         //   ListarAlunosReprovados();
            break;
            case 16:
         //   sair();
            break;

    }
}