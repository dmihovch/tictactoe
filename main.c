#include "funcs.h"

int main(void){
  struct Player
  {
    char name[50];
    int wins;
    char mark;
    int markAsc;
    char play[50];
  };
  //setting up players
  struct Player player1;
  struct Player player2;
  player1.wins = 0;
  player2.wins = 0;
  strcpy(player1.play,"Player1");
  strcpy(player2.play,"Player2");
  player_one_name(player1.name);
  player1.mark = player_one_mark();
  if(player1.mark == 'X'){
    player2.mark = 'O';
    player2.markAsc = 79;
    player1.markAsc = 88;
  }
  if(player1.mark == 'O'){
    player2.mark = 'X';
    player2.markAsc = 88;
    player1.markAsc = 79;
  }
  player_two_name(player2.name);
  printf("\nPlayer 2: Your mark is %c\n",player2.mark);
  
  //start working on game logic
  bool playMore = true;
  while(playMore)
  {
    //Make so it changes who goes first everytime.
    printf("Press ENTER to Start!\n");
    getchar(); //try a better way, don't this, sloppy ash
    int board[9] = {0,0,0,0,0,0,0,0,0};
    bool validGameState = true;
    while(validGameState){
      printBoard(board);
      playerTurn(&player1,board);
      //check game state
      printBoard(board);
      playerTurn(&player2,board);
      //check game state
      
      validGameState = false; //delete these for it to work
    }
    
    playMore = false; //delete these for it to work
  }
  return 1;
}

