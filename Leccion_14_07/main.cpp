#include <iostream>

using namespace std;

///1. Leer n n�meros y almacenarlos en un arreglo para posteriormente rotarlos un espacio a la derecha.
///No puedes usar otro arreglo

int main()
{
    ///[7,8,51,4,20]
    ///[20,7,8,51,4] Rotar: El �ltimo n�mero se pasar� al inicio del arreglo y los dem�s n�meros se mover�n hacia la derecha hasta que pase lo mismo.

    int n;
    cout << "Introduce un n�mero.\n";
    cin >> n;

    int arr_A[n];

    cout << "\nAhora, introduce un arreglo que contenga " << n << " n�meros.\n";

    for(int i = 0; i < n; i++){
        cin >> arr_A[i];
    }

    int num_original = arr_A[n-1];

    for(int i = n - 1; i >= 0; i--){

        if(i == 0){
            arr_A[i] = num_original;
        }

        else{
            int change = i - 1;
            arr_A[i] = arr_A[change];
        }
    }

    cout << "\n";

    for(int i = 0; i < n; i++){
        cout << arr_A[i] << " ";
    }

    return 0;
}
