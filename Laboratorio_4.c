/* LABORATORIO 4 en C
Author: Ramírez Espejel Aldo
Date: 9 de marzo 2023
Description: Laboratorio 4 en C con código que realiza una 
suma, resta, multiplicación o división bajo ciertas condiciones y 
según la opción seleccionada en un menú.
---------------------INSTRUCCIONES-----------------------
Cree una funcion "suma" que imprima la suma de dos valores solo si son pares, de lo conrario imprimirá que no son pares
Cree una funcion "resta" que imprima la resta de dos valores solo si son múltiplos de 5, de lo conrario imprimirá que no son impares
Cree una funcion "division" que imprima la división de dos valores solo si el resultado no tiene reciduo, de lo conrario imprimirá que no es una división exacta
Cree una funcion "multiplicacion" que imprima la multiplicación de dos valores solo si son mayores a 10, de lo conrario imprimirá que no son mayores a 10*/

#include <stdio.h>
#include <stdlib.h>

int imprimirMenu(){
    int opcion;
    printf("Bienvenido al menú, por favor seleccione una opción\n\n");
    printf("\t1)SUMA DE DOS NÚMEROS PARES\n"); 
    printf("\t2)RESTA DE DOS NÚMEROS MÚLTIPLOS DE 5\n"); 
    printf("\t3)DIVISIÓN DE DOS NÚMEROS EXACTA (SIN RESIDUO)\n");
    printf("\t4)MULTIPLICACIÓN DE DOS NÚMEROS MAYORES A 10\n");
    scanf("%d",&opcion);
    if(opcion)
        return opcion;
    else
        return 0;
}

void suma(){
    int numero1, numero2, suma;
    printf("*** OPCIÓN SUMA DE DOS NÚMEROS PARES ***\n");
    printf("Ingrese dos números pares (dejando un espacio entre ellos):\n");
    scanf("%d %d", &numero1, &numero2);

    if (numero1 % 2 == 0 && numero2 % 2 == 0) {
        suma = numero1 + numero2;
        printf("%d + %d es igual a %d\n", numero1, numero2, suma);
    } else {
        printf("ERROR, ambos números deben ser pares.\n");
    }
}


void resta() {
    int numero1, numero2, resta;
    printf("*** OPCIÓN RESTA DE DOS NÚMEROS MÚLTIPLOS DE 5 ***\n");
    printf("Ingrese dos números múltiplos de 5 (dejando un espacio entre ellos):\n");
    scanf("%d %d", &numero1, &numero2);
    if (numero1 % 5 == 0 && numero2 % 5 == 0) {
        resta = numero1 - numero2;
        printf("%d - %d es igual a %d\n", numero1, numero2, resta);
    }
    else {
        printf("ERROR, ambos números deben ser múltiplos de 5.\n");
    }
}

void division(){
    int numero1, numero2, division;
    printf("*** OPCIÓN DIVISIÓN DE DOS NÚMEROS EXACTA (SIN RESIDUO) ***\n");
    printf("Ingrese dos números para la división (dejando un espacio entre ellos):\n");
    scanf("%d %d", &numero1, &numero2);
    if (numero1 % numero2 == 0) {
        division = numero1 / numero2;
        printf("%d / %d es igual a %d\n", numero1, numero2, division);
    }
    else {
        printf("ERROR, la división no es exacta.\n");
    }
}

void multiplicacion(){
    int numero1, numero2, multiplicacion;
    printf("*** OPCIÓN MULTIPLICACIÓN DE DOS NÚMEROS MAYORES A 10 ***\n");
    printf("Ingrese dos números mayores a 10 (dejando un espacio entre ellos):\n");
    scanf("%d %d", &numero1, &numero2);
    if (numero1 > 10 && numero2 > 10) {
        multiplicacion = numero1 * numero2;
        printf("%d x %d es igual a %d\n", numero1, numero2, multiplicacion);
    }
    else {
        printf("ERROR, ambos números deben ser mayores a 10.\n");
    }
}

int main() {
    int flag = 0;
   int confirm = 1;
    while (flag != 5) {
        if (confirm == 1) {
            system("clear");
            flag = imprimirMenu();
        }
        
        switch (flag) {
            case 1:
                system("clear");
                suma();
                break;

            case 2:
                system("clear");
                resta();
                break;

            case 3:
                system("clear");
                division();
                break;

            case 4:
                system("clear");
                multiplicacion();
                break;

            default:
                printf("\nOPCIÓN NO VÁLIDA\n");
                break;
        }
        printf("\n¿QUIERE VOLVER AL MENÚ PRINCIPAL? (TECLEA EL NÚMERO 1 PARA SÍ Y EL 0 PARA NO): ");
        scanf("%d", &confirm);
        if(confirm == 0){
            system("clear");
            exit (-1);
        }
        printf("\n");
    }
}

//---------------------INSTRUCCIONES-----------------------
//explique: 
//      1. ¿Qué es lo que hace el código en un comentario antes de modificarlo?
//         Imprimir un menú con cuatro opciones vacías mediante un while, cada que acaba la funcion se borra la pantalla y se borra la entrada.
//      2. ¿Para qué sirve la función fflush?
//         Vacía la zona de entrada o búfer que da el usuario.
//      3. ¿Cuál es la sintaxis de un while?
//         while (condición) {
//         código a ejecutar
//         }
//      4. ¿Cuál es la sintaxis de un switch?
//         switch (variable){
//         case 1:
//         break;
//         case 2:
//         break;
//         default;
//         break;
//         }
//Modifique el siguien código para que mande a llamar la función suma, resta, multiplicación y división y agregue un mecanismo para preguntar si se deasea volver al menú principal.
//Guarde y suba su código a un repositorio.
