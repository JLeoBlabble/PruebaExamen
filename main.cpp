#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;                                            // Definir las tres variables a la vez
    for (a = 1; a <= 20; a++) {                             // 1er bucle valores potenciales "a". Hasta 20 por requisito de c = 17.
        for (b = a; b <= 20; b++) {                         // 2do bucle valores potenciales "b". Hacemos b = a para evitar duplicados.
            c = sqrt(a * a + b * b);                      // Definir "c"
            if (a + b > c and c * c == a * a + b * b) {     // Condición para que sea un triángulo. Repetimos definición de c para que se cumpla la condicion de triple pitagorico.
                printf("%d - %d - %d\n", a, b, c);          // Imprimir los valores de a, b y c.
            }
        }
    }
    return 0;
}
