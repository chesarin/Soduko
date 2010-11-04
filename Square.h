#include <iostream> 
using namespace std; 
#ifndef SQUARE_H_
#define SQUARE_H_
class Square{
 private:
  int myarray[10]=0 ;


 public:
  //Square();
  bool is_Singleton();
  void set_value(int pos);
  void print_values();
  void clean();
};
#endif
