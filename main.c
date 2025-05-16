#include "game.h"

int main()
{
    char    c;
    int score;

    int t_score;
    t_score = 1;

    ft_start(&score, &c);
    do
    {
        ft_draw(&me, &apple, &score);
        ft_canvas(&me, &apple);
        if (GetKeyState('A') < 0 || GetKeyState('D') < 0 || GetKeyState('S') < 0 || GetKeyState('W') < 0)
            ft_game_active(&me, &c);
        else
            ft_game_passive(&me, c);
        ft_game_wall(&me, &score);
        setcur(0, 0);
        Sleep(160);
        }
    while (c != 'e' && score < 5 && score >= 0);
    system("cls");
    if (score >= 3)
        printf ("\n\n YOU WIN \n\n");
    else
        printf ("\n\n YOU LOSE \n\n");
    Sleep (1000);
    c = _getch();
    return 0;
}
