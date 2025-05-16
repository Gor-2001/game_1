#include "game.h"

void ft_game_active(struct Object *me, char *c)
{


    if (GetKeyState('A') < 0 || GetKeyState('D') < 0 || GetKeyState('S') < 0 || GetKeyState('W') < 0)
    {
        ft_coordinate(me);
        if (GetKeyState('W') < 0)
        {
            --me->y;
            *c = 'w';
        }

        if (GetKeyState('S') < 0)
        {
            ++me->y;
            *c = 's';
        }
        if (GetKeyState('A') < 0)
        {
            --me->x;
            *c = 'a';
        }
        if (GetKeyState('D') < 0)
        {
            ++me->x;
            *c = 'd';
        }
    }
}

void    ft_game_passive(struct Object *me, char c)
{
    ft_coordinate(me);
    if (c == 'w')
        --me->y;
    if (c == 's')
        ++me->y;
    if (c == 'a')
        --me->x;
    if (c == 'd')
        ++me->x;
}

void    ft_game_wall(struct Object *me, int *score)
{
    if (me->x >= width - 2)
    {
        me->x = width - 3;
        *score = -1;
    }
    if (me->x <= 0)
    {
        me->x = 1;
        *score = -1;
    }
    if (me->y >= heigh - 1)
    {
        me->y = heigh - 2;
        *score = -1;
    }
    if (me->y <= 0)
    {
        me->y = 1;
        *score = -1;
    }
}
