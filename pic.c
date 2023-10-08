/*
** EPITECH PROJECT, 2023
** pic
** File description:
** display pic of stra
*/

void pic(int h)
{
    int i = 0;
    int starter = h * 3 - 1;

    while (i < starter) {
        my_putchar(' ');
        i++;
    }
    my_putchar('*');
    my_putchar('\n');
}
