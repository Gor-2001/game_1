#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

#define width 40
#define heigh 20

void ft_game_active(struct Object* me, char* c);
void ft_game_passive(struct Object* me, char c);
void ft_game_wall(struct Object* me, int* score);

void setcur(int x, int y);
void ft_canvas(struct Object* me, struct Object* apple);
void ft_draw(struct Object* me, struct Object* apple, int* score);

void ft_start(int* score, char* c);

void ft_add(struct Object* me);
void ft_coordinate(struct Object* me);

struct Object
{
  int x;
  int y;
  char c;
  void *next;
} me, apple;

#endif
