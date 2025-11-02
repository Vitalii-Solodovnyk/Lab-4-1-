#include <stdio.h>

int main(void) {
    int days, start;

    do {
        printf("Введите количество дней в месяце (1–31): ");
        if (scanf("%d", &days) != 1) {

            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            days = 0; 
            printf("Ошибка: нужно ввести целое число!\n");
            continue;
        }
        if (days < 1 || days > 31) {
            printf("Ошибка: количество дней должно быть от 1 до 31.\n");
        }
    } while (days < 1 || days > 31);


    do {
        printf("Введите день недели, с которого начинается месяц (1–7, где 1 = Воскресенье): ");
        if (scanf("%d", &start) != 1) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            start = 0;
            printf("Ошибка: нужно ввести целое число!\n");
            continue;
        }
        if (start < 1 || start > 7) {
            printf("Ошибка: день недели должен быть в диапазоне 1–7.\n");
        }
    } while (start < 1 || start > 7);


    printf("\nПростой календарь месяца:\n\n");


    for (int i = 1; i < start; i++) {
        printf("   "); 
    }


    for (int d = 1; d <= days; d++) {
        printf("%3d", d); 

        if ((d + start - 1) % 7 == 0) {
            printf("\n");
        }
    }


    if ((days + start - 1) % 7 != 0)
        printf("\n");

    return 0;
}
