#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, x1, x2;

    // Задаем значения 
    a = 1;
    b = -3;
    c = 2;

    // Вычисляем дискриминант
    discriminant = (b * b) - (4 * a * c);

    // Проверка (есть или нет)
    if (discriminant >= 0) {
        // Вычисляем корни
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);

        // Вывод
        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2);
    } else {
        printf("Корни не существуют\n");
    }

    return 0;
}
