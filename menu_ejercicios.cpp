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

        switch (opcion) {
            case 1:
                Menu::borrar_pantalla();
                Ejercicios::primer_ejercicio();
                Menu::pausar_borrar();
                break;
            case 2:
                Menu::borrar_pantalla();
                Ejercicios::segundo_ejercicio();
                Menu::pausar_borrar();
                break;
            case 3:
                Menu::borrar_pantalla();
                Ejercicios::tercer_ejercicio();
                Menu::pausar_borrar();
                break;
            case 4:
                Menu::borrar_pantalla();
                Ejercicios::cuarto_ejercicio();
                Menu::pausar_borrar();
                break;   
            case 5:
                Menu::borrar_pantalla();
                Ejercicios::quinto_ejercicio();
                Menu::pausar_borrar();
                break;  
            case 6:
                Menu::borrar_pantalla();
                Ejercicios::sexto_ejercicio();
                Menu::pausar_borrar();
                break; 
            case 7:
                Menu::borrar_pantalla();
                Ejercicios::septimo_ejercicio();
                Menu::pausar_borrar();
                break;
            case 8:
                Menu::borrar_pantalla();
                Ejercicios::octavo_ejercicio();
                Menu::pausar_borrar();
                break;
            case 9:
                Menu::borrar_pantalla();
                Ejercicios::noveno_ejercicio();
                Menu::pausar_borrar();
                break;
            case 10:
                Menu::borrar_pantalla();
                Ejercicios::decimo_ejercicio();
                Menu::pausar_borrar();
                break;   
            case 11:
                Menu::borrar_pantalla();
                Ejercicios::undecimo_ejercicio();
                Menu::pausar_borrar();
                break;      
            case 12:
                Menu::borrar_pantalla();
                Ejercicios::duodecimo_ejercicio();
                Menu::pausar_borrar();
                break; 

            case 13:
                Menu::borrar_pantalla();
                Ejercicios::decimo_tercer_ejercicio();
                Menu::pausar_borrar();
                break;      

            case 14:
                Menu::borrar_pantalla();
                Ejercicios::decimo_cuarto_ejercicio();
                Menu::pausar_borrar();
                break;

            case 15:
                Menu::borrar_pantalla();
                cout << "Saliendo..." << "\n";
                break;
            default:
                cout << "Opcion fuera del rango" << "\n";
                Menu::pausar_borrar();
                break;

        }        
    }
}
