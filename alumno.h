#ifndef _ALUMNO_H
#define _ALUMNO_H 1

struct alumno_t {
        int dni;
        int promedio;
};

int procesar_archivo(char * path);

#endif
