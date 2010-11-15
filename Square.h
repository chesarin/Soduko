/*Cesar Vargas
 *AI Square.h
 *This will be each element on the soduko board
 */
#ifndef SQUARE_H_
#define SQUARE_H_
#include <iostream>
using namespace std;
class Square{
 private:
  int myarray[10];

 public:
  Square();
  bool is_Singleton();
  void set_value(int pos);
  void delete_value(int pos);
  void print_values();
  void clean();
  int get_children();
};
#endif
