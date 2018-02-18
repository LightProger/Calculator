#include <stdio.h>

/*
 *  Напишите программу-калькулятор для четырёх основных арифметических действий.

    Входные данные:
    Символ действия c и два целых числа a, b (b!=0)

    Выходные данные:
    Одно вещественное число, либо строку ERROR!, если введено недопустимое действие.
    Формат вывода чисел: два знака после запятой.

    Sample Input:
    + 45 23

    Sample Output:
    68.00
 */
int main() {
    char c;
    double a, b;
    scanf(" %c %lf %lf", &c, &a, &b);

    switch (c)
    {
        case '+': printf("%.2lf", a + b); break;
        case '-': printf("%.2lf", a - b); break;
        case '*': printf("%.2lf", a * b); break;
        case '/': printf("%.2lf", a / b); break;
        default: printf("ERROR!"); break;
    }
    return 0;
}