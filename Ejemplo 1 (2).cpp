#include "iostream" // Incluye la biblioteca estándar para entrada y salida de datos.
#include "stdlib.h" // Incluye la biblioteca estándar para funciones del sistema, como system()


using namespace std;// Permite el uso del espacio de nombres estándar, evitando escribir "std::" antes de cout y endl.
int main() // Función principal donde comienza la ejecución del programa.
{

    for(int i=50;i<=100;i+=2)  // Bucle for que inicia con i = 50 y se ejecuta mientras i sea menor o igual a 100, aumentando i en 2 en cada iteración.
    {
        cout <<  i << endl;// Imprime el valor actual de i seguido de un salto de línea.
    }
    system("PAUSE");// Pausa la ejecución del programa hasta que el usuario presione una tecla (solo en Windows).
    return 0;  // Retorna 0 para indicar que el programa finalizó correctamente.
}