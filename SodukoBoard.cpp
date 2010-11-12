#include "SodukoBoard.h"
SodukoBoard::SodukoBoard(){
  int row=0, col = 0;
  for ( ; row < MAX ; row++ ){
    for ( ; col < MAX ; col++ ){
      board[row][col] = 0;
    }
  }
}
void SodukoBoard::fill_up(string line, int line_num){
  int temp;
  int sentinel=1;
  for( istringstream i(line) ; i >> temp ; ){
    board[line_num][sentinel] = temp;
    sentinel++;
  }
}
void SodukoBoard::print_board(){
  for ( int row=1 ; row < MAX ; row++){
    for ( int col=1 ; col < MAX ; col++ ){
      cout <<  board[row][col];
    }
    cout << endl;
  }
}
