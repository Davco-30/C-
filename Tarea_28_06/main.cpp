#include <iostream>

using namespace std;

///1. Crear una funci�n para obtener la suma de los primeros n n�meros enteros

int function_sum(array_sum[], length);

int main()
{
    cout << "Introduce un n�mero.\n";
    int n;
    cin >> n;

    cout << "\n";

    cout << "Introduce m�s n�meros dependiendo del que acabas de introducir.\n";

    int array_1[n];

    for(int i = 0; i < n; i++){
        cin >> array_1[i];
    }

    cout << "\n" << function_1(array_1, n) << "\n";

    return 0;
}


int function_sum(array_sum[], length){
    int sum = 0;

    for(int i = 0; i < length; i++){
        sum = sum + array_sum[i];
    }

    return sum;
}
