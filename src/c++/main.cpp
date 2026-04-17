#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int numeros[MAX];
    int n;

    cout << "¿Cuántos números deseas ingresar? ";
    cin >> n;

    if (n <= 0 || n > MAX) {
        cout << "Cantidad no válida." << endl;
        return 1;
    }

    // Ingreso de datos
    for (int i = 0; i < n; i++) {
        cout << "Ingresa el número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    int suma = 0;
    int mayor = numeros[0];
    int menor = numeros[0];

    // Procesamiento
    for (int i = 0; i < n; i++) {
        suma += numeros[i];

        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }

        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    double promedio = (double)suma / n;

    // Resultados
    cout << "\nResultados:" << endl;
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;

    return 0;
}