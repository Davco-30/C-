#include <iostream>

using namespace std;

int main()
{
    ///1
    ///Leer n n�meros y despu�s leer un n�mero k. Indicar cuantas parejas de n�meros suman exactamente k.
    ///Luego ingresa cuales parejas;

    //N�mero de n�meros
    int num_1;
    cout << "Ingresa un n�mero" << endl;

    cin >> num_1;

    //N�meros del arreglo
    int num_array[num_1];
    cout << "\nAhora ingresa m�s n�meros de acuerdo al primero que has dado.\n";

    for(int i = 0; i < num_1; i++){
        cin >> num_array[i];
    }

    //N�mero k
    int num_k;
    cout << "\nFinalmente, ingresa un �ltimo n�mero" << endl;

    cin >> num_k;

    //Cantidad de n�meros que dan k en la suma
    int pair_total = 0;

    //Este 'for' hace la suma d en�meros para comprobar si dan exactamente k y suma 2 a la cantidad de n�meros (o pares) que dan k
    for(int i = 0; i < num_1; i++){
        int sum = 0;

        for(int j = i+1; j < num_1; j++){
            sum = num_array[i] + num_array[j];

            if(sum == num_k){
                pair_total = pair_total + 2;
            }
        }

    }

    //Arreglo de los n�meros
    int pair_list[0];
    int pair_list_size = 0;

    for(int i = 0; i < num_1; i++){
        int sum = 0;

        for(int j = i + 1; j < num_1; j++){
            sum = num_array[i] + num_array[j];

            if(sum == num_k){
                pair_list[pair_list_size] = num_array[i];
                pair_list_size = pair_list_size + 1;
                pair_list[pair_list_size] = num_array[j];
                pair_list_size = pair_list_size + 1;
            }
        }

    }


    //N�mero de pares
    int pair_quantity = pair_total / 2;

    //Si el n�mero de parejas es mayor a 1
    if(pair_quantity > 1){
        cout << "\nEl total de parejas de n�meros que suman exactamente " << num_k << " es: " << pair_quantity << " parejas.\n";

        cout << "\nLas parejas de n�meros que suman exactamente " << num_k << " son: \n";

        for(int i = 0; i < pair_list_size; i++){
             cout << pair_list[i] << " ";
        }

        cout << "\n";
    }


    //Si el n�mero de parejas es igual a 0
    if(pair_quantity == 0){
        cout << "\nEl total de parejas de n�meros que suman exactamente " << num_k << " es: " << pair_quantity << " parejas.\n";
        cout << "\n";
    }


    //Si el n�mero de parejas es igual a 1
    if(pair_quantity == 1){
        cout << "\nEl total de parejas de n�meros que suman exactamente " << num_k << " es: " << pair_quantity << " pareja.\n";

        cout << "\nLa pareja de n�meros que suman exactamente " << num_k << " es: \n";

        for(int i = 0; i < pair_list_size; i++){
             cout << pair_list[i] << " ";
        }


        cout << "\n";
    }



    return 0;
}
