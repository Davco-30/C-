#include <iostream>

using namespace std;

int main()
{
    ///1
    ///Tendr�s que leer n n�meros e indicar cuantos de esos n�meros son pares y cuantos son impares.

    /*
    int num_frst;
    int num;
    int even = 0;
    int odd = 0;

    cout << "Introduce un n�mero, por favor. \n" << endl;
    cin >> num_frst;

    cout << "Ahora introduce "<< num_frst << " n�meros individuales y determina cuales de ellos son pares e impares. \n";

    for(int i=1; i<=num_frst ; i++){
        cin >> num;

        if(num%2 == 0){
            even = even +1;
        }

        if(num%2 == 1){
            odd = odd +1;
        }
    }

    cout << "El total de n�meros pares es: " << even << "\n";
    cout << "El total de n�meros impares es: " << odd << "\n";

    */

    ///2
    ///Leer n e imprimir un cuadrado del signo * para crear un cuadrado.

    int num;

    cout << "Introduce un n�mero y crea un cuadrado formado por el signo de *. \n";
    cin >> num;

    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num; j++){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
