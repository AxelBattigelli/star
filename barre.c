/*
** EPITECH PROJECT, 2023
** barre
** File description:
** it's a line
*/

void barre(int h)
{
    for (int i = 0; i < h * 2 + 1; i++) {
        my_putchar('*');
    }
    for (int i = 0; i < (h * 2 - 3); i++) {
        my_putchar(' ');
    }
    for (int i = 0; i < h * 2 + 1; i++) {
        my_putchar('*');
    }
    my_putchar('\n');
}
