#include <iostream>

using namespace std;

///1. Crear una funci�n que reciba un entero como par�metro. La funci�n deber� de retornar 1 si el n�mero es par o 0 si el n�mero es impar.

///2. Crear una funci�n que reciba un entero como par�metro. La funci�n deber� de retornar la suma de todos los n�meros enteros de 1 a n.

///3. Crear una funci�n que reciba un s�lo entero y que devuelva 1 si el n�mero es primo o 0 si el n�mero no es primo.

///4. Crear una funci�n que reciba un n�mero n y que imprima todos los n�meros enteros desde 1 a n separados por un espacio.


///Estas declaraciones permiten que main() pueda estar presente en el principio.
int function_even_odd(int a);
int function_sum(int n);
int function_prime(int b);
void numbers(int n);

int main()
{
    ///4
    int n;
    cin >> n;

    ///Esta es una funci�n void. No retorna ning�n valor como es visto dentro de la funci�n y s�lo la llamas de esta forma en el main.
    numbers(n);

    ///1
    /*
    int a;
    cin >> a;

    cout << function_even_odd(a);
    */

    ///2
    /*
    int n;
    cin >> n;

    cout << function_sum(n);
    */

    ///3
    int b;
    cin >> b;

    cout << function_prime(b);

    return 0;
}

int function_even_odd(int a){         ///1
    if(a % 2 == 0){
        return 1;
    }

    if(a % 2 == 1){
        return 0;
    }
}


int function_sum(int n){              ///2
    int num = 0;

    for(int i = 0; i <= n; i++){
        num = num + i;
    }

    return num;
}


int function_prime(int b){            ///3
    int prime_q = 0;

    for(int i = 0; i <= b; i++){
        for(int j = 0; j <= b; j++){
            if(i * j == b){
                prime_q = prime_q + 1;
            }
        }
    }

    if(prime_q == 2){
        return 1;
    }

    else{
        return 0;
    }
}


void saludar(){
    cout << "Hola\n";
}


void numbers(int n){                  ///4
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
}


