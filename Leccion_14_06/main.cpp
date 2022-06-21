#include <iostream>
#include <math.h>

using namespace std;

///Funciones

///Hacer una nueva funci�n
/// Tipo Nombre(Tipo de dato _ Variable == Par�metros){ Procedimiento }

///Estas declaraciones permiten que main() pueda estar presente en el principio.
int suma(int a, int b); ///Esta funci�n declara al programa: "Se encontrar� una funci�n ENTERA llamada 'suma' con par�metros enteros de a hasta b"
int resta(int a, int b); ///Esta funci�n declara al programa: "Se encontrar� una funci�n ENTERA llamada 'resta' con par�metros enteros de a hasta b"
int mult(int a, int b);
float divide(float a, float b); ///Esta funci�n declara al programa: "Se encontrar� una funci�n FLOTANTE llamada 'divide' con par�metros flotantes de a hasta b"
float form_g(float a, float b, float c); ///Esta funci�n declara al programa: "Se encontrar� una funci�n FLOTANTE llamada 'divide' con par�metros flotantes de a hasta c"
float form_g_2(float a, float b, float c);


int main(){  ///Cerebro del programa
    cout << suma(8,7) << endl;
    cout << resta(8,7) << endl;
    cout << mult(8,7) << endl;
    cout << divide(8,7) << endl;
    cout << form_g(1, 0, -1) << endl;
    cout << form_g_2(1, 0, -1) << endl;
    return 0;
}

int f(int x){  ///Nueva funci�n
    return x * x;
}

int suma(int a, int b){
    return a + b; ///return es la clave para regresar la operaci�n que corresponde a la funci�n 'suma'
}

int resta(int a, int b){
    return a - b;
}

int mult(int a, int b){
    return a * b;
}

float divide(float a, float b){
    return a / b;
}

float form_g(float a, float b, float c){
    return (-b + sqrt( (b * b) - (4*a*c)) ) / (2 * a);
}

float form_g_2(float a, float b, float c){
    float result = (-b - sqrt( (b * b) - (4*a*c)) ) / (2 * a);
    return result;
}

