'''
printMenu()
LABORATORIO 4 en Python
Author: Ramírez Espejel Aldo
Date: 9 de marzo 2023
Description: Laboratorio 4 en Python con código que realiza una 
suma, resta, multiplicación o división bajo ciertas condiciones y 
según la opción seleccionada en un menú
Param: [option] --- [entero]

-------PREGUNTAS--------
1. ¿Qué es lo que hace el código antes de modificarlo?
En resumen, el programa muestra un menú al usuario y espera a que seleccione una opción. 
Una vez seleccionada, el programa realiza una acción correspondiente y luego muestra el menú 
nuevamente para que el usuario pueda seleccionar otra opción. Este proceso se repite hasta que 
se selecciona una opción inválida.

2. ¿Cuál es la sintaxis de un while?
while condición:
    código a ejecutar}
    
3. ¿Qué es un elif?
Es una palabra clave para indicar "si las condiciones anteriores no fueron
ciertas, intente con esta condición".

4. ¿Qué función de se ejecuta al correr el script?
Esto significa que el programa se ejecuta FLAG, pero debido a que nuestro ciclo while 
establece que la función "printMenu()" se asigna a la variable "flag", podemos decir que en 
realidad es como si la función "printMenu()" se estuviera ejecutando en su lugar. 
En otras palabras, la función "printMenu()" es la que controla el flujo del programa en ese momento.
'''

import os

def suma():
    num1 = int(input("\nIngrese un valor: "))
    num2 = int(input("\nIngrese otro valor: "))
    if num1 % 2 == 0 and num2 % 2 == 0:
        resultado = num1 + num2
        print(f"\nLa suma de {num1} + {num2} es: {resultado}\n")
    else:
        print("\nLos valores ingresados no son pares\n")

def resta():
    num1 = int(input("\nIngrese un valor: "))
    num2 = int(input("\nIngrese otro valor: "))
    if num1 % 5 == 0 and num2 % 5 == 0:
        resultado = int(num1 - num2)
        print("\nLa resta de {} - {} es: {}\n".format(num1, num2, resultado))
    else:
        print("\nLos valores ingresados no son múltiplos de 5\n")

def division():
    num1 = int(input("\nIngrese un valor: "))
    num2 = int(input("\nIngrese otro valor: "))
    if num1 % num2 == 0:
        resultado = num1 / num2
        print(f"\nLa división de {num1} / {num2} es: {resultado}\n")
    else:
        print("\nLa división no es exacta\n")

def multiplicacion():
    num1 = int(input("\nIngrese un valor: "))
    num2 = int(input("\nIngrese otro valor: "))
    if num1 > 10 and num2 > 10:
        resultado = num1 * num2
        print(f"\nLa multiplicación de {num1} * {num2} es: {resultado}\n")
    else:
        print("\nAmbos valores ingresados deben ser mayores a 10\n")

print("Bienvenido al menú, por favor seleccione una opción:\n")
print("\n1) Suma\n")
print("\n2) Resta\n")
print("\n3) División\n")
print("\n4) Multiplicación\n")

opcion = int(input(":"))

# simulación de un switch case
if opcion == 1:
    suma()
elif opcion == 2:
    resta()
elif opcion == 3:
    division()
else:
    multiplicacion()
