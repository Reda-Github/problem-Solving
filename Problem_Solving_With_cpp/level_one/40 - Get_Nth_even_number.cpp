#include <iostream>
using namespace std;

int get_even_num(int num){
  int result;
  
  for (int i = 0; i < num * 2; i += 2){
    result =+ i;
  }
  
  return result;
}

int main(){

  cout << get_even_num(4) << "\n";
  
  return 0;
}