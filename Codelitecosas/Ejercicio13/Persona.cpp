#include "Persona.hpp"
#include <cstdlib>
#include <ctime>
#include <sstream>

Persona::Persona(int edad) {
    this->edad = edad;
    this->genero = generarGenero();
    string nuevoDNI = generarDNI();
    strncpy(dni, nuevoDNI.c_str(), sizeof(dni));
    dni[sizeof(dni)-1] = '\0'; // seguridad
}

Persona::~Persona() {}

int Persona::getEdad() const {
    return edad;
}

bool Persona::esMujer() const {
    return genero;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

void Persona::mostrar() const {
    cout << "DNI: " << dni 
         << " | Edad: " << edad 
         << " | Genero: " << (genero ? "Mujer" : "Hombre") 
         << endl;
}

// Generador aleatorio de género
bool Persona::generarGenero() {
    return rand() % 2; // 0 o 1
}

// Generador aleatorio de DNI (num + letra)
string Persona::generarDNI() {
    int num = rand() % 90000000 + 10000000; // 8 dígitos
    char letra = 'A' + rand() % 26;
    stringstream ss;
    ss << num << letra;
    return ss.str();
}
