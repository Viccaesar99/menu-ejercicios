#include <iostream>
#include "menu.h"
#include "menu_ejercicios.h"
#include "ejercicios.h"

using std::cout;
using std::cin;

void MenuEjercicios::menu_ejercicios() {
    int opcion;
    while(opcion != 15) {

        Menu::borrar_pantalla();

        cout << "  Menu de ejercicios" << "\n";
        cout << "------------------------" << "\n";
        cout << "1)\tImpares del 1 al 60" << "\n";
        cout << "2)\tPares descendentes del 250 al 5" << "\n";
        cout << "3)\tMayor o menor" << "\n";
        cout << "4)\tSumatoria promedio e itbis" << "\n";
        cout << "5)\tMayor menor y medio" << "\n";
        cout << "6)\timpares acumulador" << "\n";
        cout << "7)\timpares sumatoria" << "\n";
        cout << "8)\tTabla de multiplicar" << "\n";
        cout << "9)\tTablas de multiplicar" << "\n";
        cout << "10)\tdeterminar edad" << "\n";
        cout << "11)\tprimeros cien pares" << "\n";
        cout << "12)\tpares descendentes del 260 al 10" << "\n";
        cout << "13)\ttabla de multiplicar descendente" << "\n";
        cout << "14)\traiz cuadrada" << "\n";
        cout << "15)\tSalir" << "\n";
        cout << "------------------------" << "\n";
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
                break;
            default:
                cout << "Opcion fuera del rango" << "\n";

                break;


        } 
        if (opcion != 15) {
            Menu::pausar_borrar();

        }
    }
}
