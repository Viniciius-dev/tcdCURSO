cmake_minimum_required(VERSION 4.3)
project(tcdCURSO C)

set(CMAKE_C_STANDARD 11)

add_executable(tcdCURSO main.c
        models/matricula.c
        Services/cadastro.c
        Services/consulta.c
        Services/alteracao.c
        Services/exclucao.c
        Services/calculos.c
        Services/ordenacao.c
        Services/busca.c
        arquivos/percistencia.c
        menu/menu.c
        utils/validacoes.c
        utils/validacoes.h
        arquivos/percstncia.h
        menu/menu.h
        models/matricula.h
        Services/ordenacao.h
        Services/exclucao.h
        Services/consulta.h
        Services/calculos.h
        Services/cadastro.h
        Services/busca.h
        Services/alteracao.h
        models/cursos.c
        models/cursos.h)
