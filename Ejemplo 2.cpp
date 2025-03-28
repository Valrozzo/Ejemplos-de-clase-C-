#include "iostream"  // Incluye la biblioteca estándar de entrada y salida, que permite utilizar funciones como cout (para imprimir en consola) y endl (para insertar saltos de línea).
#include "stdlib.h"  // Incluye la biblioteca estándar que proporciona funciones de utilidad general, como system(), que permite ejecutar comandos del sistema operativo.

using namespace std;  // Permite utilizar el espacio de nombres estándar (std) sin tener que escribir "std::" antes de cada función, como cout o endl.

int main() {  // Función principal, punto de entrada del programa. Todo el código dentro de esta función se ejecuta al iniciar el programa.

    for(int i = 10; i > 0; i--) {  // Inicia un bucle 'for' que hace lo siguiente:
        // - 'int i = 10' inicializa la variable 'i' con el valor 10.
        // - 'i > 0' establece la condición que debe cumplirse para que el bucle continúe (mientras 'i' sea mayor que 0).
        // - 'i--' es equivalente a 'i = i - 1', es decir, disminuye el valor de 'i' en 1 después de cada iteración del bucle.
        
        cout << i << endl;  // Imprime el valor actual de 'i' seguido de un salto de línea en la consola. Este proceso se repite mientras i > 0.

    }

    system("PAUSE");  // Pausa la ejecución del programa hasta que el usuario presione una tecla (solo en Windows). Es útil para no cerrar la ventana de la consola inmediatamente después de ejecutar el programa.

    return 0;  // Retorna 0 desde la función main, indicando que el programa terminó correctamente.
}
