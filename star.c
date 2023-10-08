void star(unsigned int size)
{
    if (size == 1) {
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



void my_putchar(char c)
{
    write(1, &c, 1);
}
int main()
{
    star(0);
    star(1);
    star(2);
    star(4);
    star(5);
}
