#include <iostream>

using namespace std;

int main()
{
    ///[1,2,5]
    ///[3,6,7]
    ///[1,2,3,5,6,7]

    int n;
    cout << "Ingresa un n�mero.\n";
    cin >> n;

    int length = 2*n;
    int arr_final[length];

    int arr_1[n];
    cout << "\nAhora ingresa una lista de n�meros con un tama�o de " << n << " n�meros.\n";

    for(int i = 0; i < n; i++){
        cin >> arr_1[i];
    }
        ///[1,2,5]


    int arr_02[n];
    cout << "\nFinalmente, crea otra lista de n�meros con el mismo tama�o de n�meros.\n";

    for(int i = 0; i < n; i++){
        cin >> arr_02[i];
    }
        ///[3,6,7]


    for(int i = 0; i < length; i++){
        if(i < length/2){
            arr_final[i] = arr_1[i];
        }

        else{
            arr_final[i] = arr_02[i];
        }
    }

    for(int i = 0; i< length; i++){
        cout << arr_final[i] << " ";
    }

    return 0;
}
