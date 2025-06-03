#include "ejercicios.h"
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

void Ejercicios::primer_ejercicio() {
    int contador = 0;
    
    for(int i = 1; i < 60; i++) {
        if(i % 2 != 0) {
            cout << i << "\n";
            contador++;
        }
    }
    
    cout << "\n";
    cout << "Hay " << contador << " numeros impares entre 1 y 60" << "\n";

}

void Ejercicios::segundo_ejercicio() {
    int contador = 0;

    for(int i = 250; i > 5; i--) {
        if(i % 2 == 0) {
            cout << i << "\n";
            contador++;

        }
    }

    cout << "\n";
    cout << "Hay " << contador << " numeros pares entre 250 y 5" << "\n";
}

void Ejercicios::tercer_ejercicio() {
    int a, b;

    cout << "Ingrese el primer numero: ";
    cin >> a;
   
    cout << "Ingrese el segundo numero: ";
    cin >> b;
 

    if (a == b) {
        cout << "Ambos numeros son iguales " << a << " y " << b << "\n";

    } else if (a > b){
        cout << "El numero mayor es " << a << "\n";
        
    }else {
        cout << "El numero mayor es " << b << "\n";
    }
}

void Ejercicios::cuarto_ejercicio() {
    float sumatoria = 0, promedio, numero;

    for(int i = 0; i < 10; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numero;
        sumatoria += numero;

    }
    
    cout << "\n";
    promedio = sumatoria / 10;
    cout << "Sumatoria = " << sumatoria << "\n";
    cout << "Promedio = " << promedio << "\n";
    cout << "Descuento = " << promedio * 0.18 << "\n";
    promedio = promedio - (promedio * 0.18);

    cout << "Total = "<< promedio << "\n";
}

void Ejercicios::quinto_ejercicio() {
    int mayor, menor, medio;
    int a, b, c;

    cout << "Ingrese el primer numero: ";
    cin >> a;
    
    cout << "Ingrese el segundo numero: ";
    cin >> b;
   

    cout << "Ingrese el tercer numero: ";
    cin >> c;
    
    

    if (a != b && b != c) {
        if (a > b && a > c) {
            mayor = a;
        } else if (a > b && a < c) {
            medio = a;
        } else {
            menor = a;
        }

        if (b > a && b > c) {
            mayor = b;
        } else if (b > a && b < c) {
            medio = b;
        } else {
            menor = b;
        }

        if (c > b && c > a) {
            mayor = c;
        } else if (c > b && c < a) {
            medio = c;
        } else {
            menor = c;
        }

        cout << "El mayor es " << mayor << "\n";
        cout << "El del medio es " << medio << "\n";
        cout << "El menor es " << menor << "\n";

    } else {
        cout << "Los tres numeros son iguales" << "\n";
    }

}

void Ejercicios::sexto_ejercicio() {
    int contador = 0, acumulador = 0;
    int numero = 0;

    while(contador < 100 ) {
        if (numero % 2 != 0) {
            cout << numero << "\n";
            contador++;
            acumulador += numero;
        }
        numero++;
    }
}

void Ejercicios::septimo_ejercicio() {
    int contador = 0;
    int sumatoria = 0;

    for (int i = 0; i < 600; i++) {
        if (i % 2 != 0) {
            cout << i << "\n";
            contador++;
            sumatoria += i;
        }
        
        
    }

    cout << "son " << contador << " los primeros 300 numeros impares" << "\n";
    cout << "su sumatoria es " << sumatoria << "\n";
}

void Ejercicios::octavo_ejercicio() {
    int numero;
    cout << "Ingrese un numero entre 1 y 12: ";
    cin >> numero;

    


   if (numero <= 12 && numero >= 1) {
    
        for(int i = 1; i <= 12; i++) {
            cout << i << " * " << numero << " = " << i * numero << "\n";
        }
    } else {
        cout << "El numero esta fuera del rango" << "\n";
    }
}

void Ejercicios::noveno_ejercicio() {
    for (int i = 1; i <= 12; i++) {
        for (int j = 1; j <= 12; j++) {
            cout << i << " \033[35m*\033[0m " << j << " \033[34m=\033[0m " << i * j << "\n";
        }
        cout << "\n";
    }
}

void Ejercicios::decimo_ejercicio() {
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 1 && edad <= 17) {
        cout << "Usted es menor de edad" << "\n";
    } else if (edad >= 18 && edad <= 25) {
        cout << "Usted es adolescente" << "\n";
    } else if (edad >= 26 && edad <= 40) {
        cout << "Usted es adulto" << "\n";
    } else if (edad >= 41 && edad <= 60) {
        cout << "Usted es maduro" << "\n";
    } else if (edad >= 61 && edad <= 75) {
        cout << "Usted es de la tercera edad" << "\n";
    } else if (edad >= 76 && edad <= 100) {
        cout << "Usted esta deguabinao" << "\n";
    } else {
        cout << "Su edad esta fuera del rango de 1 a 100" << "\n";
    }
}

void Ejercicios::undecimo_ejercicio() {
    int contador = 0;
    int numero = 0;

    while(contador < 100 ) {
        if (numero % 2 == 0) {
            cout << numero << "\n";
            contador++;
            
        }
        numero++;
    }
}

void Ejercicios::duodecimo_ejercicio() {
    int contador = 0;

    for(int i = 260; i > 10; i--) {
        if(i % 2 != 0) {
            cout << i << "\n";
            contador++;

        }
    }

    cout << "\n";
    cout << "Hay " << contador << " numeros impares entre 260 y 10" << "\n";
}

void Ejercicios::decimo_tercer_ejercicio() {
    int numero;
    cout << "Ingrese un numero entre 1 y 12: ";
    cin >> numero;
    cout << "\n";

    


   if (numero <= 12 && numero >= 1) {
    
        for(int i = 12; i >= 1; i--) {
            cout << i << " * " << numero << " = " << i * numero << "\n";
        }
    } else {
        cout << "El numero esta fuera del rango" << "\n";
    }
}

void Ejercicios::decimo_cuarto_ejercicio() {
    float raiz;
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    raiz = sqrt(num);
    cout << "\n";
    cout << "La raiz cuadrada de " << num << " es " << raiz << "\n";
}
