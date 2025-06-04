#include "ejercicios.h"
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <stack>
#include <algorithm>
#include <vector>
#include <cstddef>

using std::cout;
using std::cin;
using std::string;

void Ejercicios::primer_ejercicio() {
    int contador = 0;
    
    for(int i = 1; i < 60; i++) {
        if(i % 2 != 0) {
            cout << i << " ";
            contador++;
        }
    }
    
    cout << "\n\n";
    cout << "Hay " << contador << " numeros impares entre 1 y 60" << "\n";

}

void Ejercicios::segundo_ejercicio() {
    int contador = 0;

    for(int i = 250; i > 5; i--) {
        if(i % 2 == 0) {
            cout << i << " ";
            contador++;

        }
    }

    cout << "\n\n";
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
    int mayor = 0, menor = 0, medio = 0;
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
            cout << numero << " ";
            contador++;
            acumulador += numero;
        }
        numero++;
    }
    cout << "\n\n";
    cout << "Acumulador: " << acumulador << std::endl;

}

void Ejercicios::septimo_ejercicio() {
    int contador = 0;
    int sumatoria = 0;

    for (int i = 0; i < 300; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            contador++;
            sumatoria += i;
        }
        
        
    }
    cout << "\n\n";
    cout << "son " << contador << " los numeros impares" << "\n";
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
            cout << i << " * " << j << " = " << i * j << "\n";
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

void Ejercicios::decimo_quinto_ejercicio() {
    srand(time(NULL));
    int vector_numeros[10];
    int numero;

    for (int i = 0; i < 10; i++) {
        numero = 1 + (rand() % 10);
        vector_numeros[i] = numero;
        std::cout <<"Numero: "<< vector_numeros[i] << " ";
        std::cout <<"Cuadrado: "<< std::pow(vector_numeros[i], 2) << " ";
        std::cout <<"Cubo: "<< std::pow(vector_numeros[i], 3) << " ";
        std::cout << "\n";
    }

    std::cout << std::endl;
}

void Ejercicios::decimo_sexto_ejercicio() {
    string datos[5];
    string datos_reverso[5];
    std::stack<string> reversor;

    for (int i = 0; i < 5; i++) {
        cout << "Introduce el dato " <<"["<<i+1<<"]: ";
        std::getline(cin, datos[i]);
        reversor.push(datos[i]);

    }
    
    for (int i = 0; i < 5; i++) {
        datos_reverso[i] = reversor.top();
        reversor.pop();
    }
    cout << "\n";

    cout << "Vector Normal: ";
    for (string dato: datos) {
        cout << dato << ", ";
    }
    cout << "\n";

    cout << "Vector inverso: ";
    for (string dato : datos_reverso) {
        cout << dato << ", ";
    }
    cout << std::endl;
}

void Ejercicios::decimo_septimo_ejercicio() {
    int notas[5];
    float nota_media;
    int n;
    
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese su nota " <<i+1<<": ";
        cin >> notas[i];
        if (notas[i] > 10 || notas[i] < 0) {
            std::cerr << "Nota ha excedido el rango 0 - 10" << std::endl;
            return;
        }
    } 
    
    cout << "\n";
    cout << "Notas: ";
    for (int nota : notas) {
        cout << nota << ", ";
        nota_media += nota;
    }
    cout << "\n";
    nota_media /= 5;
    cout << "Nota media: " << nota_media << "\n";

    n = sizeof(notas) / sizeof(notas[0]);
    std::sort(notas, notas + n);

    cout << "Nota mas alta: " << notas[4] << "\n";
    cout << "Nota mas baja: " << notas[0] << std::endl;
}

void Ejercicios::decimo_octavo_ejercicio() {
    std::vector<int> numeros;
    int num;

    cout << "Ingrese diez numeros enteros" << "\n";
    for (int i = 0; i < 10; i++) {
        cout << "["<<i+1<<"]: ";
        cin >> num;
        numeros.push_back(num);
        if (num < 0) {
            break;
        }
    }

    cout << "\n";
    cout << "Numeros: ";
    for (int num : numeros) {
        if (num >= 0) {
            cout << num << ", ";
        }
    }
    cout << std::endl;
}

void Ejercicios::decimo_noveno_ejercicio() {
    srand(time(NULL));
    int num_aleatorio;
    int vector_numeros[8];
    int n;

    for (int i = 0; i < 8; i++) {
        num_aleatorio = 1 + (rand() % 50);
        vector_numeros[i] = num_aleatorio;
    }
    cout << "Vector normal: ";
    for (int num : vector_numeros) {
        cout << num << ", ";
    }
    cout << "\n";
    n = sizeof(vector_numeros) / sizeof(vector_numeros[0]);

    std::sort(vector_numeros, vector_numeros + n);
    
    cout << "Vector ordenado: ";
    for (int num : vector_numeros) {
        cout << num << ", ";
    }

    cout << std::endl;
}

void Ejercicios::vigesimo_ejercicio() {
    const std::string meses[12] = {"Enero", "Febrero", "Marzo", 
                                    "Abril", "Mayo", "Junio", 
                                    "Julio", "Agosto", "Septiembre", 
                                    "Octubre", "Noviembre", "Diciembre"};

    const int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int num;

    cout << "Ingrese el numero del mes: ";
    cin >> num;
    if (num > 12 || num < 1) {
        std::cerr << "Numero fuera del rango 1 - 12" << "\n";
        return;
    }

    cout << "\n";
    cout << "Mes: " << meses[num-1] << "\n";
    cout << "Dias: " << dias[num-1] << "\n";
}

void Ejercicios::vigesimo_primer_ejercicio() {
    int vector_1[5], vector_2[5], vector_3[5];

    cout << "Ingrese los valores del primero vector" << "\n";
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el dato [" <<i+1<< "]: ";
        cin >> vector_1[i];
    }
    cout << "\n";
    
    cout << "Ingrese los valores para el segundo vector" << "\n";
    for (int i = 0; i < 5; i++){
        cout << "Ingrese el dato [" <<i+1<< "]: ";
        cin >> vector_2[i];
    }
    cout << "\n";

    for (int i = 0; i < 5; i++) {
        vector_3[i] = vector_1[i] + vector_2[i];
    }
    cout << "Resultado: ";
    for (int num: vector_3) {
        cout << num << " ";

    }
    cout << std::endl;
}
