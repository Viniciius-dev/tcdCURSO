//
// Created by oproprio on 9/25/26.
//

#ifndef TCDCURSO_MATRICULA_H
#define TCDCURSO_MATRICULA_H
#include "cursos.h"

#endif //TCDCURSO_MATRICULA_H


 struct matricula {
     char id;
     char *Nome_aluno [100];
     const char *nomeDoCurso = tcdcurso_gatName(&tcdcursos);
     int periodo;
     float cargaHoraria;
     char situacao [100];
     float notaFinal;

 };