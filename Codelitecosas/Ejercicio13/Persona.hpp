#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Persona {
private:
    bool genero;        // 1 = Mujer, 0 = Hombre
    int edad;
    char dni[10];

    static string generarDNI();
    static bool generarGenero();

public:
    Persona(int edad);
    ~Persona();

    int getEdad() const;
    bool esMujer() const;
    void setEdad(int edad);
    void mostrar() const;
};

#endif
