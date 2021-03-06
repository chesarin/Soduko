#include <iostream>
using namespace std;
void get_row(int row);
void get_column(int column);
void get_square(int square);
//void get_square();
void get_options();

int board[10][10] = 
  {
    {0,1,2,3,4,5,6,7,8,9},
    {1,0,0,1,0,0,6,0,2,0},
    {2,6,0,0,0,0,2,5,0,0},
    {3,0,0,0,9,0,0,3,6,8},
    {4,7,0,0,0,0,0,4,8,0},
    {5,0,0,0,6,0,8,0,0,0},
    {6,0,5,8,0,0,0,0,0,1},
    {7,3,9,2,0,0,4,0,0,0},
    {8,0,0,5,8,0,0,0,0,3},
    {9,0,8,0,3,0,0,1,0,0}
  };
int mrow[10];
int mcolumn[10];
int msquare[10];
int main(){
  // cout << "Rows " << endl;
  // for ( int i = 1 ; i <= 9 ; i++ ){
  //   get_row(i);
  // }
  // cout << "Columns " << endl;
  // for ( int i = 1 ; i <= 9 ; i++ ){
  //   get_column(i);
  // }
  // get_row(1);
  // get_column(1);
  // get_square(1);
  // get_options();
  // get_row(1);
  // get_column(2);
  // get_square(1);
  // get_options();
  for ( int i=1; i < 2 ; i++){
    get_square(i);
  }
}
void get_row(int row){
  cout << "row " << row << endl;
  if ( mrow[0] != row ){
    mrow[0] = row;
    for( int sentinel=1; sentinel < 10 ; sentinel++){
      mrow[sentinel] = 0;
    }
    for( int sentinel=1; sentinel < 10 ; sentinel++){
      if ( board[row][sentinel] > 0 )
	mrow[board[row][sentinel]] = 1;
      //    cout << board[row][sentinel] ;
    }
  }
  for ( int sentinel=0; sentinel < 10 ; sentinel++){
    cout << sentinel << " " << mrow[sentinel] <<  " ";
  }
  cout << endl;
}
void get_column(int column){
  cout << "column " << column << endl;
  if ( mcolumn[0] != column ){
    mcolumn[0] = column;
    for( int sentinel=1; sentinel < 10 ; sentinel++){
      mcolumn[sentinel] = 0;
    }
    for( int sentinel=1; sentinel < 10 ; sentinel++){
      if ( board[sentinel][column] > 0 )
	mcolumn[board[sentinel][column]] = 1;
      //    cout << board[sentinel][column] ;
    }
  }
  for ( int sentinel=0; sentinel < 10 ; sentinel++){
    cout << sentinel << " " << mcolumn[sentinel] <<  " ";
  }
  // for ( int i = 1 ; i < 10 ; i++ )
  //   for ( int j = column ; j < column+1 ; j++ )
  //     cout << board[i][j] ;
  cout << endl;
  
}
void get_square(int square){
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
      //      get_row(row); get_column(column);
      if ( board[row][column] > 0 )
	msquare[board[row][column]] = 1;
    }
    for ( int i = 1 ; i < 19 ; i+=2 ){
      row=squarematrix[square][i]; column=squarematrix[square][i+1];
      get_row(row); get_column(column);
      cout << "row = " << row << "column " << column << endl;
      if ( board[row][column] != 0 )
	cout << "options is a singleton " << board[row][column] << endl;
      else
	get_options();
    }
  }
  // for ( int sentinel=0; sentinel < 10 ; sentinel++){
  //   cout << sentinel << " " << msquare[sentinel] <<  " ";
  // }
  // cout << endl;
}
void get_options(){
  cout << "And the options are " << endl;
  for ( int i=1 ; i < 10 ; i++ ){
    if ( mrow[i]+mcolumn[i]+msquare[i] == 0 )
      cout << i << " " ;
  }
  cout << endl;
}
