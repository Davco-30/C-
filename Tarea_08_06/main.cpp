#include <iostream>

using namespace std;

int main()
{
    ///1
    ///Leer n n�meros e imprimir su promedio (s�lo la parte entera)

    int num_1;
    cout << "Ingresa un n�mero" << endl;

    cin >> num_1;

    int num_array[num_1];
    cout << "Ahora ingresa m�s n�meros de acuerdo al primero que has dado.\n";

    for(int i = 0; i < num_1; i++){
        cin >> num_array[i];
    }

    int sum = 0;

    for(int i = 0; i < num_1; i++){
        sum = sum + num_array[i];
    }

    int average;

    average = sum / num_1;

    cout << average;

    return 0;
}
