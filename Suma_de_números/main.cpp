#include <iostream>

using namespace std;

int main()
{
    ///1
    int num_first;
    int result = 0;
    int num;

    cout << "Introduce un n�mero.\n";
    cin >> num_first;

    cout << "Ahora introduce " << num_first << " n�meros inividuales. \n";

    for(int i = 1; i <= num_first; i++){
        cin >> num;
        result = result + num;
    }

    cout << "El resultado de la suma de estos n�meros es: " << result;

    return 0;
}
