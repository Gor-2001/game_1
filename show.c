#include "game.h"

void setcur(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void    ft_canvas(struct Object *me, struct Object *apple)
{
    char    str[heigh][width];
    int i;
    int j;
    struct Object *temp;

    temp = me;
    i = 0;
    while (i < heigh)
    {
        j = 0;
        while (j < width - 1)
        {
            if (j == 0 || j == width - 2 || i == 0 || i == heigh - 1)
                str[i][j] = '#';
            else
                str[i][j] = ' ';
            j++;
        }
        str[i][j] = '\0';
        i++;
    }
    str[temp->y][temp->x] = temp->c;
    while (temp -> next)
    {
        temp = temp->next;
        str[temp->y][temp->x] = temp->c;
    }
    str[apple->y][apple->x] = apple->c;
    i = 0;
    while (i < heigh)
        printf ("%s\n" , str[i++]);
}

void ft_draw(struct Object *me, struct Object *apple, int *score)
{
    if (apple->x == me->x && apple->y == me->y)
    {
        apple->x = rand() * 1 / RAND_MAX * (width - 2) + 1;
        apple->y = rand() * 1 / RAND_MAX * (heigh - 2) + 1;
        *score += 1;
        ft_add(me);
    }
}
