#ifndef SODUKOBOARD_H_
#define SODUKOBOARD_H_
#define MAX 10
#include <iostream>
#include <sstream>
using namespace std;
class SodukoBoard{
 private:
  int board[MAX][MAX]; 
  int msquare[10];
  int mrow[10];
  int mcolumn[10];
 public:
  SodukoBoard();
  void fill_up(string line,int line_num);
  void print_board();
  void get_square(int square);
  void get_row(int row);
  void get_column(int column);
  void get_options();
  void solve();
};
#endif
