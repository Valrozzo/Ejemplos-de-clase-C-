#include "iostream"  // Incluye la biblioteca estándar de entrada y salida de C++, que permite utilizar cout (para imprimir) y endl (para saltos de línea).
#include "stdlib.h"  // Incluye la biblioteca estándar que proporciona acceso a funciones del sistema, como system().

using namespace std;  // Permite el uso del espacio de nombres estándar (std), lo que nos permite usar directamente funciones como cout y endl sin escribir std:: antes de cada una.

int main() {  // La función principal donde comienza la ejecución del programa.

    int contador = 0;  // Inicializa la variable 'contador' en 0. Esta variable se usará para contar cuántos números son múltiplos de 13 entre 0 y 9999.

    for(int i = 0; i < 10000; i++) {  // Inicia un bucle 'for' que comenzará en i = 0 y continuará hasta que i sea menor que 10000. En cada iteración, i incrementa en 1.
        // La condición 'i < 10000' significa que el bucle se ejecutará con valores de i desde 0 hasta 9999.
        // La expresión 'i++' incrementa el valor de 'i' en 1 después de cada ciclo del bucle.
        
        if(i % 13 == 0) {  // Condición que verifica si el valor de 'i' es múltiplo de 13. El operador '%' devuelve el residuo de la división de 'i' entre 13.
            // Si el residuo de 'i' dividido entre 13 es cero, entonces 'i' es múltiplo de 13.
            
            contador++;  // Si la condición es verdadera (i es múltiplo de 13), incrementamos el valor de 'contador' en 1.
        }
    }

    cout << contador << endl;  // Imprime el valor final de 'contador', que indica cuántos números entre 0 y 9999 son múltiplos de 13.
    // El 'endl' inserta un salto de línea después de imprimir el contador.

    system("PAUSE");  // Pausa la ejecución del programa hasta que el usuario presione una tecla (esto es solo en Windows).
    // Esto se hace para evitar que la ventana de la consola se cierre inmediatamente después de que el programa termine de ejecutarse.

    return 0;  // Finaliza la función main y retorna 0 al sistema operativo, indicando que el programa terminó correctamente.
}
