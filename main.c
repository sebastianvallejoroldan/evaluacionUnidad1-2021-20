#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main(void){

    printf("Evaluación Unidad 1");
    printf("\nIngresa el nombre del archivo del entrada: ");
    // 1)
    readInputLine();
    printf("\nIngresa el nombre del archivo de salida: ");
    readInputLine();

    printf("\nEscribe la primera línea del archivo de entrada en la primera línea del archivo de salida...");
    // 2)
    FILE *fin;
    FILE *fout;
    feature1(fin, fout);

    // 3)
    printf("\nLee la segunda línea del archivo de entrada y la escribe en el orden contrario en el archivo de salida...");
    feature2(fin, fout);

    // 4)
    printf("\nLee el arreglo de enteros en la línea 3 del archivo de entrada y calcula la suma");
    feature3(fin,fout);

    // 5) 
    printf("\nLee el arreglo y la operación");
    int *arr;
    char *op;
    int length;
    feature4(&arr,&length, &op, fin);

    // 6) 
    printf("\nSalvar el resultado de la operación anterior");
    char *res;
    feature5(fout, res);

    // 6)
    printf("\nDeserializa un objeto almacenado en la línea 4 del archivo de entrada");

    struct Obj_t{
        char *nombre;
        int cedula;
    };

    struct Obj_t object;
    feature6(fin,&object);

    //7)
    printf("\nSerializa un objeto");
    feature7(fout,&object);

    return EXIT_SUCCESS;
}
