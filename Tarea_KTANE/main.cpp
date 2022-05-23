#include <iostream>

using namespace std;

int main()
{
    int num_A = rand() % 10;
    int num_B = rand() % 10;
    int num_K = rand() % 10;

    int num_cont;
    string respuesta_1 = Sí;
    string respuesta_2 = sí;

    string respuesta_n_1 = No;
    string respuesta_n_2 = no;


    cout << "Puede que hayas tenido éxito en varios modulos y hayan trabajado bien como mi equipo. Sin embargo, si su meta es salvarse de esta bomba, solamente deben desmantelar un último modulo. Para conocer más instrucciones, ingrese cualquier número.";
    cin >> num_cont;

    cout << "Se te dará una pregunta a continuación. Primero, obtendrás 3 números al azar. Con los primeros 2 número, resta el primer número con el segundo número.";
    cout << "Después, obtén el valor absoluto de dicha resta y define si el resultado es o no menor al tercer número que hayas obtenido.";
    cout << "Si estás listo para realizar este último modulo, ngrese cualquier número.";

    cin >> num_cont;

    cout << num_A;
    cout << num_B;
    cout << num_K;

    cout << "¿Es la resta menor al tercer número?";

    if

}
