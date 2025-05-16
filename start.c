#include "game.h"

void    ft_start(int *score, char *c)
{
    srand((unsigned int)time(NULL));
    printf ("Press w,a,s,d for move and e for exit \nPress any key to continue.");
    *c = _getch();
    *c = 'a';
    system("cls");
    *score = 0;
    me.x = rand() * 1 / RAND_MAX * (width/3) + 1;
    me.y = rand() * 1 / RAND_MAX * (heigh - 2) + 1;
    me.c = '@';
    me.next = NULL;
    apple.x = 4;
    apple.y = 4;
    apple.c = '$';
    apple.next = NULL;
}
