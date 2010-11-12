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
void SodukoBoard::get_square(int square){
  //  int sentinel;
  cout << "square number "<< square << endl;
  int squarematrix[10][19] =
    {
      { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
      { 1,1,1,1,2,1,3,2,1,2,2,2,3,3,1,3,2,3,3 },
      { 2,1,4,1,5,1,6,2,4,2,5,2,6,3,4,3,5,3,6 },
      { 3,1,7,1,8,1,9,2,7,2,8,2,9,3,7,3,8,3,9 },
      { 4,4,1,4,2,4,3,5,1,5,2,5,3,6,1,6,2,6,3 },
      { 5,4,4,4,5,4,6,5,4,5,5,5,6,6,4,6,5,6,6 },
      { 6,4,7,4,8,4,9,5,7,5,8,5,9,6,7,6,8,6,9 },
      { 7,7,1,7,2,7,3,8,1,8,2,8,3,9,1,9,2,9,3 },
      { 8,7,4,7,5,7,6,8,4,8,5,8,6,9,4,9,5,9,6 },
      { 9,7,7,7,8,7,9,8,7,8,8,8,9,9,7,9,8,9,9 },
    };
  int row;
  int column;    
  if ( msquare[0] != square ){
    msquare[0] = square;
    for (int sentinel=1 ; sentinel < 10 ; sentinel++){
      msquare[sentinel] = 0;
    }
    for ( int i = 1 ; i < 19 ; i+=2 ){
      row=squarematrix[square][i]; column=squarematrix[square][i+1];
      if ( board[row][column] > 0 )
	msquare[board[row][column]] = 1;
    }
  }
}
