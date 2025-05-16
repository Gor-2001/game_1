#include "game.h"

void ft_add(struct Object *me)
{
    struct Object *temp;
    struct Object *lst;

    temp = malloc (1 * sizeof(struct Object *));
    lst = me;
    while (lst->next)
        lst = lst->next;
    lst->next = (void *)temp;
    temp->y = 0;
    temp->x = 0;
    temp->c = '@';
    temp->next = NULL;
}

void ft_coordinate(struct Object *me)
{
    if (me->next)
    {
        int x1;
        int y1;
        int x2;
        int y2;
        struct Object *temp;

        temp = me;
        x1 = me->x;
        y1 = me->y;
        while (temp->next)
        {
            temp = temp->next;
            x2 = temp->x;
            y2 = temp->y;
            temp->x = x1;
            temp->y = y1;
            x1 = x2;
            y1 = y2;
        }
    }
}
