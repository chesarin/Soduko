/*
 *Soduko.h
 *Cesar Vargas
 *Artificial Intelligence Fall 2010
 */
#include <iostream>
#ifndef SODUKO_H_
#define SODUKO_H_
using namespace std;
class Soduko{
 private:
  int board[9][9];
  int column[9];
  int row[9];
  int square[9];
 public:
  Soduko();
  void fillboard(const int &line[], int row);
}
#endif
