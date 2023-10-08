/*
** EPITECH PROJECT, 2023
** center
** File description:
** display center of star
*/

void center1(int h)
{
    int start_end = 1;
    int center_end = (h * 2 - 3) + (h * 2 + 1) * 2 - 4;
    int i = 0;

    while (i < h) {
        for (int j = 0; j < start_end; j++) {
            my_putchar(' ');
        }
        my_putchar('*');
        for (int j = 0; j < center_end; j++) {
            my_putchar(' ');
        }
        my_putchar('*');
        start_end++;
        center_end = center_end - 2;
        i++;
        my_putchar('\n');
    }
}

void center2(int h)
{
    int start_end = h;
    int center_end = h * 4 + 2;
    int i = 0;

    while (i < h) {
        for (int j = 0; j < start_end; j++) {
            my_putchar(' ');
        }
        my_putchar('*');
        for (int j = 0; j <= center_end; j++) {
            my_putchar(' ');
        }
        my_putchar('*');
        start_end--;
        center_end = center_end + 2;
        i++;
        my_putchar('\n');
    }
}
