#include <iostream>

using namespace std;

int main()
{
    ///1
    ///Leer n n�meros e imprimir esos n n�meros en el orden inverso en el que se leyeron.
    /*
    int n;

    cout << "Introduce un n�mero.\n";
    cin >> n;

    int num[n];

    cout << "Ahora, inserta n�meros individuales de acuerdo con el n�mero que diste en el principio. \n";

    for(int i = n - 1; i >= 0; i--){
        cin >> num[i];
    }

    for(int i = 0; i < n; i++){
        cout << "El n�mero de la posici�n " << i << " es: " << num[i] << "\n";
    }
    */

    ///2
    /*
    int n;

    cout << "Introduce un n�mero.\n";
    cin >> n;

    int num[n];

    cout << "Ahora, inserta n�meros individuales de acuerdo con el n�mero que diste en el principio. \n";

    for(int i = 0; i < n; i++){
        cin >> num[n-i-1];
    }

    for(int i = 0; i < n; i++){
        cout << "El n�mero de la posici�n " << i << " es: " << num[i] << "\n";
    }
    */

    return 0;
}
