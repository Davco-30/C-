#include <iostream>

using namespace std;

int main()
{
    ///1
    ///Leer n n�meros e indicar qu� n�mero aparece la mayor cantidad de veces (se te garantiza que no habr� empates en primer lugar)

    int num_1;
    cout << "Ingresa un n�mero" << endl;

    cin >> num_1;

    int num_array[num_1];
    cout << "Ahora ingresa m�s n�meros de acuerdo al primero que has dado.\n";

    for(int i = 0; i < num_1; i++){
        cin >> num_array[i];
    }

    int cal_final = 0;
    int num_final = 0;

    for(int i = 0; i < num_1; i++){
        int num_total = 1;

        for(int j = i+1; j < num_1; j++){

            if(num_array[i] == num_array[j]){
                num_total = num_total + 1;
            }

        }

        if(num_total > cal_final){
            cal_final = num_total;
            num_final = num_array[i];
        }
    }

    cout << "\n El n�mero de veces m�s grande que aparece un n�mero es: " << cal_final << "\n El n�mero que aparece una mayor cantidad de veces es: " << num_final;

    return 0;
}
