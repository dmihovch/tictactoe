#include "funcs.h"
void println(){
  printf("\n");
}
void get_name(char* name){
  if(fgets(name,sizeof(name),stdin)==NULL){
    printf("Error capturing name, try again");
    get_name(name);
  }
  if(name[strlen(name)-1] == '\n'){
    name[strlen(name)-1] = '\0';
  }
}
//add functionality for dealing with seg faults!
void player_one_name(char* name){
  printf("\nPlayer 1: Enter Your Name!\n");
  get_name(name);
  printf("\nWelcome %s, you are Player 1\n",name);
}
void player_two_name(char* name){
  printf("\nPlayer 2: Enter Your Name!\n");
  while (getchar() != '\n');
  get_name(name);
  printf("\nWelcome %s, you are Player 2\n",name);
}




char get_mark(){
  printf("\nPlayer 1: X or O\n");
  char markStr[2];
  fgets(markStr,sizeof(markStr),stdin);
  char mark = markStr[0];
  if(mark == 'X' || mark == 'O'){
    return mark;
  }
  if(mark=='x'){
    return 'X';
  }
  if(mark=='o'){
    return 'O';
  }
  printf("Invalid Input: random choice...\n");
  srand(time(NULL));
  int randNum = rand();
  if(randNum){
    return 'X';
  }
  return 'O';
}
char player_one_mark(){
  char mark;
  mark = get_mark();
  printf("\nPlayer 1: Your mark is %c\n",mark);
  return mark;
}

void printBoard(int board[]){
  println();
  int count = 0;
  for(int i = 0; i<9; i++){
    count++;
    printf("| %d ",board[i]);
    if(count == 3){
      printf("|\n");
      count = 0;
    }

  }
  println();
}
//X 88
//O 79
void playerTurn(struct Player *p,int *board){
  printf("%s: Choose a spot\n",p->play);
  int choice;
  bool invalidMsg = false;
  bool notValid = true;
  while(notValid){
    if(invalidMsg){
      printf("Invalid input, try again");
    }
    scanf("%d",&choice);
    if(choice < 1 || choice > 9){
      continue;
    }
    if(board[choice-1]!=0){
      continue;
    }
    notValid = false;
  }
  board[choice-1] = p->markAsc;
}

