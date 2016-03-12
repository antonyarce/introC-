//
//  main.cpp
//  introC++
//
//  Created by Antony Arce on 19/12/15.
//  Copyright © 2015 Antony Arce. All rights reserved.
//

#include <iostream> // Permite el uso del cout y cin
using namespace std;

int mult(int x, int y){ // Se define una funcion
    return x * y;
}

class Mensaje {  // Se define la clase
public: // Se define que es publica (La clase es privada por defecto)
    
    string mensaje; // Atributo
    
    Mensaje(string msj){ // Constructor de la clase
        establecerMensaje(msj); // Establece el mensaje
    }
    
    void establecerMensaje(string msj){ // Establece el valor de la variable
        mensaje = msj;
    }
    
    string obtenerMensaje(){ // Retorna el valor de la variable
        return mensaje;
    }
    
    void mostrar(){ // Funcion para mostrar el texto
        cout<< "Mensaje: " << obtenerMensaje() << "\n";
    }
    
};

int main(){ // Main
    
    int number; // Variable
    int *ptr; // Variable pointer
    
    ptr = &number; // Se asigna una direccion al puntero
    
    
    Mensaje mensaje("Cambio de mensaje"); // Se instancia el objeto con el constructor
    mensaje.mostrar(); // Se usa el metodo
    
    cout<< "Introduzca un numero: "; // Imprime
    
    cin>> number; // Asigna el input a una variable
    
    cout<< "Introdujo: " << number <<
    " .... Valor: " << *ptr <<
    ", Dirreccion: " << ptr <<"\n" ; // Imprime el valor y la dirrecion de la variable
    
    if (number >= 10) {
        int number2;
        
        cout<< "Introduzca otro numero para multiplicar: \n";
        
        cin >> number2;
        
        cout<< "La multiplicacion es: " << mult(number, number2) << "\n";
   
    } else {
        for (int i = number; i > 0; i--){
            
            cout<< i <<endl;
        }
    }
}


