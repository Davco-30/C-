#include <iostream>

using namespace std;

///1. Dados dos arreglos ordenados de tama�o n cada uno.
///   Crear un arreglo de tama�o 2n con los valores de esos arreglos, tambi�n ordenado

int main()
{
    int n;
    cout << "Ingresa un n�mero.\n";
    cin >> n;

    int arr_1[n];
    cout << "\nAhora ingresa una lista de n�meros con un tama�o de " << n << " n�meros.\n";

    for(int i = 0; i < n; i++){
        cin >> arr_1[i];
    }

    int arr_02[n];
    cout << "\nFinalmente, crea otra lista de n�meros con el mismo tama�o de n�meros.\n";

    for(int i = 0; i < n; i++){
        cin >> arr_02[i];
    }

    cout << "\n";


    int length = 2*n;
    int arr_final[length];



    for(int i = 0; i < length; i++){
        if(i < n){
            arr_final[i] = arr_1[i];
        }

        else{
            arr_final[i]=arr_02[i-n];
        }

    }


    for(int i = 0; i < length; i++){
        for(int j = i + 1; j < length; i++){
            if(arr_final[i] > arr_final[j]){
                int c = arr_final[i];
                arr_final[i] = arr_final[j];
                arr_final[j] = c;
            }
        }
    }

    for(int i = 0; i < length; i++){
        cout << arr_final[i] << " ";
    }

    return 0;
}
