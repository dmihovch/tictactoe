#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
void get_name(char*);
void player_one_name(char*);
char player_one_mark();
void player_two_name(char*);
char get_mark();
void printBoard(int*);
void println();
void playerTurn(struct Person*, int*);

#ifndef FUNCS_H
#define FUNCS_H
struct Player{
  char name[50];
  int wins;
  char mark;
  int markAsc;
  char play[50];
};
#endif

