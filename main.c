#include "funcs.h"

int main(void){
  struct Player
  {
    char name[50];
    int wins;
    char mark;
  };
  //setting up players
  struct Player player1;
  struct Player player2;
  player_one_name(player1.name);
  player1.mark = player_one_mark();
  if(player1.mark == 'X'){player2.mark = 'O';}
  if(player1.mark == 'O'){player2.mark = 'X';}
  player_two_name(player2.name);
  printf("\nPlayer 2: Your mark is %c\n",player2.mark);
  
  //start working on game logic
  bool playMore = true;
  while(playMore)
  {
    printf("Press ENTER to Start!\n");
    getchar(); //try a better way, don't this, sloppy ash
    int board[9] = {0,0,0,0,0,0,0,0,0};
    bool validGameState = true;
    while(validGameState){
      printBoard(board);
      validGameState = false; 
    }
    
    playMore = false;
  }
  return 1;
}

