#include <iostream>

using namespace std;

int main()
{
    ///1
    ///Leer n n�meros e imprimir lo siguiente: desplegar por pantalla una sola l�nea el mismo orden de los n�meros, pero en medio
    ///de cada uno de esos n�meros hay que imprimir un signo demayor o menor que.

    int num_frst;

    cout << "Por favor introduce un n�mero, por favor." << endl;
    cin >> num_frst;

    int num_gp[num_frst];

    cout << "Ahora, introduce una cantidad de n�meros indivduales dependiendo del n�mero introducido recientemente.\n";

    for(int i=0; i<num_frst; i++){
        cin >> num_gp[i];
    }

    for(int i=0; i<num_frst - 1; i++){
        if(num_gp[i] < num_gp[i+1]){
            cout << num_gp[i] << "<";
        }

        if(num_gp[i] > num_gp[i+1]){
            cout << num_gp[i] << ">";
        }
    }

    cout << num_gp[num_frst - 1];


    return 0;
}
