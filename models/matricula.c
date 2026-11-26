//
// Created by oproprio on 9/25/26.
//
#include "matricula.h"

#include <stdio.h>

int matricula() {
    struct matricula aluno;
    printf("Edital de matricula\n");
    printf("Dados pedidos\n");
    printf("periodo, nome do aluno, carga Horaria, situacao,");

    printf("digite o nome do aluno\n");
    scanf("%s", aluno.Nome_aluno);
    printf("digite o periodo do aluno\n");
    scanf("%d", &aluno.periodo);
    printf("Digite a situacao do aluno\n");
    scanf("%s", aluno.situacao);

    //salvar no txt de alunos

    printf("Aluno cadastrado com sucesso\n");
    printf("Nome do aluno: %s\n", aluno.Nome_aluno);
    printf("Periodo do aluno: %d\n", aluno.periodo);
    printf("Situacao: %s\n", aluno.situacao);
    printf("=====================================");

    return 0;
}


/*
 *matricula
 *   char id;
     char Nome_aluno [100];
    // const char *nomeDoCurso = tcdcurso_gatName(&tcdcursos);
     int periodo;
     float cargaHoraria;
     char situacao [100];
     float notaFinal;
     char curso [100];
 *
 */