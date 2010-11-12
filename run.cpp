//#include <iostream>
#include "SodukoBoard.h"
#include <fstream>
SodukoBoard test1;
//using namespace std;
void prompt();
int main(){
  test1.print_board();
  prompt();
  test1.print_board();
  //  Square test1;
  //  test1.print_values();
  //cout << "Let's start adding values " << endl;
  // test1.set_value(3);
  // test1.set_value(1);
  // test1.print_values();
  // List1<string> friends;
  // friends.insert("Bowen,Yan");
  // friends.insert("Cesar, Vargas");
  // friends.insert("Pedro, Martinez");
  // friends.print();
}
void prompt(){
  string line;
  int sentinel=1;
  ifstream ifs ("input.txt");
  cout << "Opening the file with the soduko problem" << endl;
  if (ifs.is_open()){
    while( getline(ifs,line) ){
      //      cout << "input line is " << line << " and line is " << sentinel << endl;
      test1.fill_up(line,sentinel);
      sentinel++;
    }
    ifs.close();
  }
  else cout << "unable to find input file" << endl;  
}
