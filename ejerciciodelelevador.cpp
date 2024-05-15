
#include <iostream>
using namespace std;

int main() {
    const int MIN_LEVEL = 1;
    const int MAX_LEVEL = 25;
    int currentLevel = 1;
    int targetLevel;

    cout << "Ascensor actualmente en el nivel " << currentLevel << endl;
    cout << "Ingrese el nivel al que desea ir (1-25): ";
    cin >> targetLevel;

    if (targetLevel < MIN_LEVEL || targetLevel > MAX_LEVEL) {
        cout << "Nivel no válido. Por favor ingrese un nivel entre 1 y 25." << endl;
    } else {
        currentLevel = targetLevel;
        cout << "Ascensor ha llegado al nivel " << currentLevel << endl;

        if (currentLevel == MIN_LEVEL) {
            cout << "Botón disponible: Subir" << endl;
        } else if (currentLevel == MAX_LEVEL) {
            cout << "Botón disponible: Bajar" << endl;
        } else {
            cout << "Botones disponibles: Subir y Bajar" << endl;
        }
    }

    return 0;
}