#include <iostream>

using namespace std;

int main()
{
    ///1st
    /*
    cout << "Ingresa 2 números\n";
    int num1;
    int num2;

    cin >> num1;
    cin >> num2;

    int mult = num1 * num2;
    cout << mult;

    */

    ///2nd
    cout << "Ingresa un número\n";
    int num;

    cin >> num;

    if(num == 0){
        cout << "Tu número " << num << " es igual a 0";
    }

    if(num < 0){
        cout << "Tu número es menor a 0. O sea, es negativo";
    }

    if(num > 0){
        cout << "Tu número es mayor a 0. O sea, epositivo";
    }

    return 0;
}
