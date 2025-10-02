#include <Cola.hpp>

int main(int argc, char **argv)
{
    Cola cola;

    cola.insertar(3);
    cola.insertar(4);
    cola.insertar(5);
    cola.insertar(2);
    cola.insertar(1);
    cola.mostrar();

    int primero = cola.verPrimero();
    cout << "Despues de extraer el primero (" << primero << ")..." << endl;

    cola.eliminar();
    cola.mostrar();

    cola.eliminar();
    cola.mostrar();

    cola.eliminar();
    cola.mostrar();

    cola.eliminar();
    cola.mostrar();

    cola.eliminar();
    cola.mostrar();

    return 0;
}
