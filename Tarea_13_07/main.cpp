#include <iostream>

using namespace std;

///1. Leer un n�mero n y despu�s leer 2 arreglos de tama�o n. Ambos arreglos ser�n anagramas. Con una sola excepci�n, en el segundo arreglo
/// habr� un �nico cero, debes de indicar qu� n�mero del primer arreglo no aparece en el segundo
/// Todos los n�meros son positivos mayores a 0. Solamente hay un cero en el segundo arreglo.

int main()
{
    /// [6,8,9,3,21,4,61]
    /// [61,21,3,0,9,6,4]
    /// cout << 8;

    int n;
    cout << "Introduce un n�mero.\n";
    cin >> n;

    int arr_A[n];
    int arr_B[n];

    cout << "Ahora introduce una cantidad de n�meros de acuerdo al n�mero que hab�as escrito.\n";

    for(int i = 0; i < n; i++){
        cin >> arr_A[i];
    }

    cout << "Introduce otro arreglo con los mismos n�meros del primero, pero remplaza un n�mero con un 0.\n";

    for(int i = 0; i < n; i++){
        cin >> arr_B[i];
    }

    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

            if(arr_A[i] == arr_B[j]){
                arr_A[i] = -1;
                arr_B[j] = -1;
            }

        }

    }

    for(int i = 0; i < n; i++){
        if(arr_A[i] != -1){
            cout << "\nEl n�mero que no aparece en el segundo arreglo es: " << arr_A[i];
        }
    }

    return 0;
}
