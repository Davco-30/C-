#include <iostream>

using namespace std;

int main()
{
    float num1;
    float num2;

    cout << "Por favor, ingrese 2 n�meros: \n";
    cin >> num1;
    cin >> num2;

    if(num1 == num2){
        cout << "Los 2 n�meros que ingres� son iguales.";
    }

    if(num1 < num2){
        cout << "El primer n�mero es menor al segundo n�mero.";
    }

    if(num1 > num2){
        cout << "El primer n�mero es mayor al segundo n�mero.";
    }
cd
    return 0;
}
