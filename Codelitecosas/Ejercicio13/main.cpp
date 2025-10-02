#include "Persona.hpp"
#include <cstdlib>
#include <ctime>
#include <set>

int main() {
    srand(time(0));
    set<int> edadesUsadas;
    Persona* personas[10];

    int count = 0;
    while (count < 10) {
        int edad = rand() % 10 + 18; // rango [18,27]
        if (edadesUsadas.find(edad) == edadesUsadas.end()) {
            edadesUsadas.insert(edad);
            personas[count] = new Persona(edad);
            count++;
        }
    }

    for (int i = 0; i < 10; i++) {
        personas[i]->mostrar();
        delete personas[i];
    }

    return 0;
}
