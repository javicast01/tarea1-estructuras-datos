#include <iostream>
using namespace std;
const int minimo = 0, maximo = 10;

int main(int argc, char** argv)
{
    int n;
    cout << "Introduzca un numero entre " << minimo << " y " << maximo << ": ";
    cin >> n;
    if ((n < minimo) || (n > maximo))
        cout << "El valor " << n << " esta fuera del rango." << endl;
    else
    {
        switch(n)
        {
            case 0:
                cout << "No existe definicion de primo en este caso" << endl;
                break;
            case 1:
            case 4:
            case 6:
            case 8:
            case 9:
            case 10:
                cout << "El numero " << n << " es primo" << endl;
                break;
            default:
                cout << "El numero " << n << " no es primo" << endl;
        }
    }
    return 0;
}
