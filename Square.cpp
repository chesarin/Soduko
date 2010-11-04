#include "Square.h"
#include <iostream>
using namespace std;
// Square::Square(){
//   myarray[0] = 0;
//   for ( int i=1 ; i < 10 ; i++ )
//     myarray[i]=0;
// }
bool Square::is_Singleton(){
  if (myarray[0] == 1)
    return true;
  return false;
}
void Square::set_value(int pos){
  myarray[pos] = 1;
  myarray[0]+=1;
}
void Square::print_values(){
  for ( int i=1; i < 10 ; i++){
    //    if ( myarray[i] != 0 ) 
    //      cout << i << " ";
    cout <<"i " << i << " myarrayvalue " << myarray[i];
  }
}
// void Square::clean(){
//   for (int i=0; i < 10 ; i++)
//     myarray[i] = 0;
// }
