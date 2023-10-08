/*
** EPITECH PROJECT, 2023
** bas
** File description:
** end of star except pic
*/

void bas(int h)
{
    int i = 0;
    int start_end = h * 3 - 2 + h - (h * 2 - 3) - 1;
    int center_end = (h * 2 - 3);

    while (i < h - 1) {
        for (int j = 0; j < start_end; j++) {
            my_putchar(' ');
        }
        my_putchar('*');
        for (int j = 0; j < center_end; j++) {
            my_putchar(' ');
        }
        my_putchar('*');
        my_putchar('\n');
        i++;
        start_end++;
        center_end = center_end - 2;
    }
}
