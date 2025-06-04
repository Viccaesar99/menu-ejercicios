#include <cstdlib>
#include <iostream>
#include "menu.h"
#include "menu_ejercicios.h"


using std::cout;
using std::cin;

void Menu::borrar_pantalla() {
    std::system("clear || cls"); // colocar cls dentro de "" si estas en windows
}

void Menu::pausar_borrar() {
    cout << "Pulse enter para continuar...";
    cin.ignore();
    cin.get();
    Menu::borrar_pantalla();
} 

void Menu::mostrar_menu() {
    int opcion;
    while (opcion != 2) {
        Menu::borrar_pantalla();
        cout << "------------------" << "\n";
        cout << "| Menu principal |" << "\n";
        cout << "------------------" << "\n";
        cout << "| 1) Ejercicios  |" << "\n";
        cout << "| 2) Salir       |" << "\n";
        cout << "------------------" << "\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        Menu::borrar_pantalla();
        switch (opcion) {
            case 1: 
                MenuEjercicios::menu_ejercicios();
                break;
            case 2:
                break;
            default:
                cout << "Seleccione una opcion valida";
                break;
        
        }
        if (opcion != 2) {
            Menu::pausar_borrar();
        }
    }
}

