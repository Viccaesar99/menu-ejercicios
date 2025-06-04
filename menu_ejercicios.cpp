#include <iostream>
#include "menu.h"
#include "menu_ejercicios.h"
#include "ejercicios.h"

using std::cout;
using std::cin;

void MenuEjercicios::menu_ejercicios() {
    int opcion;
    while(opcion != 22) {

        Menu::borrar_pantalla();

        cout << "--------------------------------------------" << "\n";
        cout << "|           Menu de ejercicios             |" << "\n";
        cout << "--------------------------------------------" << "\n";
        cout << "| 1)  Impares del 1 al 60                  |" << "\n";
        cout << "| 2)  Pares descendentes del 250 al 5      |" << "\n";
        cout << "| 3)  Mayor o menor                        |" << "\n";
        cout << "| 4)  Sumatoria, promedio e itbis          |" << "\n";
        cout << "| 5)  Mayor menor y medio                  |" << "\n";
        cout << "| 6)  Primeros 100 impares                 |" << "\n";
        cout << "| 7)  Cuantos impares hasta 300            |" << "\n";
        cout << "| 8)  Una tabla de multiplicar             |" << "\n";
        cout << "| 9)  Doce tablas de multiplicar           |" << "\n";
        cout << "| 10) Frase segun la edad                  |" << "\n";
        cout << "| 11) Primeros 100 pares                   |" << "\n";
        cout << "| 12) Pares descendentes del 260 al 10     |" << "\n";
        cout << "| 13) Tabla de multiplicar descendente     |" << "\n";
        cout << "| 14) Raiz cuadrada de un numero           |" << "\n";
        cout << "| 15) Cuadrado y cubo de numeros aleatorios|" << "\n";
        cout << "| 16) Invertir vector de cadenas           |" << "\n";
        cout << "| 17) Promedio, maximo y minimo de notas   |" << "\n";
        cout << "| 18) Rellenar vector hasta dato negativo  |" << "\n";
        cout << "| 19) Numeros aleatorios ordenados         |" << "\n";
        cout << "| 20) Identificar meses                    |" << "\n";
        cout << "| 21) Sumar vectores                       |" << "\n";
        cout << "| 22) Salir                                |" << "\n";
        cout << "--------------------------------------------" << "\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        Menu::borrar_pantalla();

        switch (opcion) {
            case 1:
                Ejercicios::primer_ejercicio();
                break;

            case 2:
                Ejercicios::segundo_ejercicio();
                break;

            case 3:
                Ejercicios::tercer_ejercicio();
                break;

            case 4:
                Ejercicios::cuarto_ejercicio();
                break;

            case 5:
                Ejercicios::quinto_ejercicio();
                break;

            case 6:
                Ejercicios::sexto_ejercicio();
                break; 
            case 7:
                Ejercicios::septimo_ejercicio();
                break;

            case 8:
                Ejercicios::octavo_ejercicio();
                break;

            case 9:
                Ejercicios::noveno_ejercicio();
                break;

            case 10:
                Ejercicios::decimo_ejercicio();
                break;

            case 11:
                Ejercicios::undecimo_ejercicio();
                break;

            case 12:
                Ejercicios::duodecimo_ejercicio();
                break; 

            case 13:
                Ejercicios::decimo_tercer_ejercicio();
                break;      

            case 14:
                Ejercicios::decimo_cuarto_ejercicio();
                break;

            case 15:
                Ejercicios::decimo_quinto_ejercicio();
                break;

            case 16:
                Ejercicios::decimo_sexto_ejercicio();
                break;

            case 17:
                Ejercicios::decimo_septimo_ejercicio();
                break;

            case 18:
                Ejercicios::decimo_octavo_ejercicio();
                break;

            case 19:
                Ejercicios::decimo_noveno_ejercicio();
                break;

            case 20:
                Ejercicios::vigesimo_ejercicio();
                break;

            case 21:
                Ejercicios::vigesimo_primer_ejercicio();
                break;

            case 22:
                break;

            default:
                cout << "Opcion fuera del rango" << "\n";
                break;

        } 

        if (opcion != 22) {
            Menu::pausar_borrar();
        }
    }
}
