#include <iostream>

using namespace std;

///1. Leer n n�meros e invertir el orden del arreglo

int main()
{

    int n;

    cout << "Por favor, introduce un n�mero.\n";
    cin >> n;

    cout << "\n";

    int array_1[n];

    cout << "Ahora, introduce m�s n�meros, dependiendo del n�mero que acabas de introducir.\n";

    for(int i = 0; i < n; i++){
        cin >> array_1[i];
    }

    cout << "\n";
    cout << "El arreglo que acabas de crear es:\n";

    for(int i = 0; i < n; i++){
        cout << array_1[i] << " ";
    }

    cout << "\n\n";
    cout << "El orden inverso de dicho arreglo es:\n";

    for(int i = n - 1; i >= 0; i--){
        cout << array_1[i] << " ";
    }

    return 0;
}

