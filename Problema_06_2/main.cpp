#include <iostream>

using namespace std;

int main()
{
    ///1
    ///Leer n n�meros. Despu�s, crea un arreglo de tama�o "x" y otro arreglo de tama�o "y".
    ///En el primer arreglo, almacena todos los n�meros pares del arreglo originalmente le�do.
    ///Y en el segundo arreglo, almacena los n�meros impares.
    ///X y Y tienen que ser la cantidad de pares y la cantidad de impares respectivamente.

    int n_1;
    cout << "Ingresa un n�mero" << endl;

    cin >> n_1;

    int n_gp[n_1];
    cout << "Ahora ingresa m�s n�meros de acuerdo al primero que has dado.\n";

    for(int i = 0; i < n_1; i++){
        cin >> n_gp[i];
    }

    int x = 0;
    int y = 0;

    for(int i = 0; i < n_1; i++){
        if(n_gp[i] % 2 == 0){
            x = x + 1;
        }

        if(n_gp[i] % 2 == 1){
            y = y + 1;
        }
    }

    int gp_A[x];
    int gp_B[y];

    x = 0;
    y = 0;

    for(int i = 0; i < n_1; i++){
        if(n_gp[i] % 2 == 0){
            gp_A[x] = n_gp[i];
            x = x + 1;
        }

        if(n_gp[i] % 2 == 1){
            gp_B[y] = n_gp[i];
            y = y + 1;
        }
    }

    for(int i = 0; i < x; i++){
        cout << gp_A[i] << endl;
    }

    for(int i = 0; i < y; i++){
        cout << gp_B[i] << endl;
    }


    return 0;
}
