/*
** EPITECH PROJECT, 2023
** star
** File description:
** main file to run and display a star
*/

void star(unsigned int size)
{
    if (size == 0) {
        return;
    } else if (size == 1) {
        write(1, "   *\n", 5);
        write(1, "*** ***\n", 8);
        write(1, " *   *\n", 7);
        write(1, "*** ***\n", 8);
        write(1, "   *\n", 5);
    } else {
        pic(size);
        haut(size);
        barre(size);
        center1(size);
        center2(size - 1);
        barre(size);
        bas(size);
        pic(size);
    }
}
