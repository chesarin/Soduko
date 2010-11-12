#ifndef SODUKOBOARD_H_
#define SODUKOBOARD_H_
#define MAX 10
#include <iostream>
#include <sstream>
using namespace std;
class SodukoBoard{
 private:
  int board[MAX][MAX]; 
 public:
  SodukoBoard();
  void fill_up(string line,int line_num);
  void print_board();
};
#endif
