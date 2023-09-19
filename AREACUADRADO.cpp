#include <stdio.h>
#include <math.h>

int main() {
    double radio, area;

    // Solicitar al usuario el valor del radio
    printf("Por favor, introduce el valor del radio del círculo: ");
    scanf("%lf", &radio);

    // Calcular el área del círculo usando la fórmula A = π * r^2
    area = M_PI * pow(radio, 2);

    // Mostrar el resultado con dos decimales
    printf("El área del círculo con radio %.2lf es: %.2lf\n", radio, area);

    return 0;
}
