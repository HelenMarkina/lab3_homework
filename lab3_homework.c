// Написать и отладить программу пересчета пропускной способности из бит/с в Кбайт/с и обратно.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int choice;
    float value, result;

    printf("ПРОГРАММА ПЕРЕСЧЕТА ПРОПУСКНОЙ СПОСОБНОСТИ\n");
    printf("==========================================\n\n");

    printf("Выберите направление пересчета:\n");
    printf("\t1 - Из бит/с в Кбайт/с\n");
    printf("\t2 - Из Кбайт/с в бит/с\n");
    printf("Ваш выбор: ");
    scanf_s("%d", &choice);

    printf("Введите значение для пересчета: ");
    scanf_s("%f", &value);

    printf("\nРЕЗУЛЬТАТЫ ПЕРЕСЧЕТА:\n");
    printf("=====================\n");

    switch (choice) {
    case 1:
        // 1 байт = 8 бит, 1 Кбайт = 1024 байта
        result = value / 8 / 1024;
        printf("Входное значение: %.2f бит/с\n", value);
        printf("Формула: %.2f / 8 / 1024 = %.2f Кбайт/с\n", value, result);
        printf("Результат: %.2f Кбайт/с\n", result);
        break;

    case 2:
        // 1 Кбайт = 1024 байта, 1 байт = 8 бит
        result = value * 1024 * 8;
        printf("Входное значение: %.2f Кбайт/с\n", value);
        printf("Формула: %.2f Кбайт/с * 1024 * 8 = %.2f бит/с\n", value, result);
        printf("Результат: %.2f бит/с\n", result);
        break;

    default:
        printf("Ошибка! Неверный выбор. Выберите 1 или 2.\n");
        return 1;
    }

    return 0;
}
