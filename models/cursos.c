//
// Created by oproprio on 9/25/26.
//

#include "cursos.h"

#include <string.h>

void inicializar_cursos () {
    struct tcdcurso tcdcursos;


    strcpy (tcdcursos.name, "cursos");
    strcpy (tcdcursos.description, "Cursos");
    strcpy (tcdcursos.url, "//Link.com/cursos");
    strcpy (tcdcursos.author, "Autor do Curso");


    tcdcursos.cursos[0] = "Medicina";
    tcdcursos.cursos[1] = "Tecnologia";
    tcdcursos.cursos[2] = "Engenharia";
    tcdcursos.cursos[3] = "Farmacia";

}
