#include <iostream>

using namespace std;

int main()
{
    cout << "Ingrese un n�mero1: " << endl;
    int num1;

    cin >> num1;

    if((num1 % 2) == 0){
        cout << "El n�mero que ingresaste es par";
    }

    if((num1 % 2) == 1){
        cout << "El n�mero que ingresaste es impar";
    }

    return 0;
}
