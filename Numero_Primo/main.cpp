#include <iostream>

using namespace std;

int main()
{
    ///1
    ///Leer el n�mero n y determina si el n�mero es primo o no.

    int num_frst;
    int div = 0;

    cout << "Por favor, introduce un n�mero." << endl;
    cin >> num_frst;

    for(int i=1; i<=num_frst; i++){
        if(num_frst % i == 0){
            div = div + 1;
        }
    }

    if(div != 2){
        cout << num_frst << " no es un n�mero primo.\n";
    }

    if(div == 2){
        cout << num_frst << " es un n�mero primo.\n";
    }

    return 0;
}
