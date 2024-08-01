#include <iostream>
#include <vector>
using namespace std;

int get_negative(int num){
  return num > 0 ? num *= -1 : num;
}

int main(){

  cout << get_negative(2) << "\n"; // ==> -2
  cout << get_negative(8) << "\n"; // ==> -8
  cout << get_negative(-8) << "\n"; // ==> -8

  return 0;
}