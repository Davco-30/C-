#include <iostream>

using namespace std;

int main()
{
    ///1
    ///Leer n n�meros y despu�s leer un n�mero k. Imprimir un par de n�mers que sumen
    ///exactamente k y que formen parte de los n n�meros introducidos.

    int n;
    cout << "Por favor, introduce un n�mero" << endl;
    cin >> n;

    int n_grp[n];
    cout << "Ahora introduce una cierta cantidad de n�meros, dependiendo del primero que comentaste.\n";

    for(int i = 0; i < n; i++){
        cin >> n_grp[i];
    }

    int k;
    cout << "Finalmente, escribe un �ltimo n�mero\n";
    cin >> k;

    //int = sum;

    for(int i = 0; i < n; i++){
        //Si se quiere que no haya una suma del mismo n�mero, inserta este for:
        //for(int j = n+1; j<n; j++)
        for(int j = 0; j<n-1; j++){

            if(n_grp[i] + n_grp[j] == k){
                cout << n_grp[i] << " y " << n_grp[j];
                return 0;
            }

        }
    }

    cout << "No existe una suma para obtener " << k
}
