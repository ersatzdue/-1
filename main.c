#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, x1, x2;

    // ������ �������� 
    a = 1;
    b = -3;
    c = 2;

    // ��������� ������������
    discriminant = (b * b) - (4 * a * c);

    // �������� (���� ��� ���)
    if (discriminant >= 0) {
        // ��������� �����
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);

        // �����
        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2);
    } else {
        printf("����� �� ����������\n");
    }

    return 0;
}
