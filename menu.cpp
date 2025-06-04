#include <cstdlib>
#include <iostream>
#include "menu.h"
#include "menu_ejercicios.h"


using std::cout;
using std::cin;

void Menu::borrar_pantalla() {
    std::system("clear"); // colocar cls dentro de "" si estas en windows
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
        cout << "Menu principal" << "\n";
        cout << "--------------" << "\n";
        cout << "1) Ejercicios" << "\n";
        cout << "2) Salir" << "\n";
        cout << "--------------" << "\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                borrar_pantalla();
                MenuEjercicios::menu_ejercicios();
                Menu::pausar_borrar();
                break;
            case 2:
                cout << "saliendo" << "\n";
                Menu::pausar_borrar();
                break;
            default:
                cout << "Seleccione una opcion valida";
                Menu::pausar_borrar();
                break;
        
        }
    }
}

