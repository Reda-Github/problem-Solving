#include <iostream>
using namespace std;

char get_char(int i){
  return char(i);
}

int main(){

  cout << get_char(5) << "\n";
  cout << get_char(65) << "\n";

  return 0;
}