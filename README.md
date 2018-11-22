# C - Archivos
## Ejercicio 2

Dado el arcivo binario generado en el [Ejercicio 1](https://github.com/gbobr/archivos) escriba una función ```c int procesar_archivo(char * path);``` que lo procese, generando como salida por pantalla el listado de alumnos aprobados (aquellos con promedio mayor o igual a 7)

### Formato de la entrada
Se recibe un archivo binario conteniendo registros del tipo ```c struct alumno_t```

### Formato de la salida

#### Happy path
Si todo funciona correctamente, dado el archivo de entrada ubicado en la ruta "test/happy.in" del presente directorio deberá mostrar por pantalla el listado de alumnos aprobados con sus respectivos promedios siguiendo *exactamente* el siguiente formato:

```
Alumnos aprobados:
DNI: 44321115 | Promedio: 7
DNI: 45231213 | Promedio: 9
DNI: 45491862 | Promedio: 8
```

La función deberá retornar 0 como código de estado, indicando que todo funcionó correctamente.

*Nota:* Respete mayusculas, minusculas, espacios, comas, signos de puntuación, etc, exactamente como están dados en la salida de ejemplo

##### Aclaraciones adicionales sobre la entrada

El archivo de entrada con el que se probará el happy path, fue generado por el programa del ejercicio uno utilizando los siguientes valores de entrada:

```
4
44321115
7
45231213
9
37123456
2
45491862
8
```

#### Exception paths
##### Error al abrir el archivo
Informe el error por pantalla y retorne el numero entero 66 como código de error(Valor de la constante EX_NOINPUT definida en sysexits.h)

##### Error en la lectura
Informe el error por pantalla y retorne el numero entero 65 como código de error(Valor de la constante EX_DATAERR definida en sysexits.h)

##### Otros errores de entrada / salida
Informe el error por pantalla y retorne el numero entero 74 como código de error(Valor de la constante EX_IOERR definida en sysexits.h)

##### Otros errores (genericos / inesperados)
Informe el error por pantalla y retorne el numero entero 1 como código de error(Código de error standard para indicar que falló)

### Aclaraciones
El archivo main.c contiene un programa principal que permite probar la función, no lo modifique, escriba su código en el archivo alumno.c

## Entrega
Realice un fork del presente repositorio desde su cuenta de github, complete el código y envíe un pull request a este repositorio para ser corregido.
Todas las correcciones y comentarios serán realizados en el pull request.

### Requisitos de aprobación
* El código debe compilar sin errores ni warnings al compilarse con GCC 4.8.4 bajo Ubuntu 14.04
* Debe pasar satisfactoriamente el lote de prueba que se encuentra en test/input.out generando exactamente la salida que puede verse en test/expected.txt
* El programa pasará por el sistema de integración Travis-ci donde se compilará automáticamente y luego podrá ver el resultado del a compilación en la sección de comentarios del pull request.
* Controle los posibles errores que pudieran ocurrir durante la operatoria con el archivo
