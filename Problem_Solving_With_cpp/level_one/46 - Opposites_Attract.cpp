#include <iostream>
using namespace std;

bool opposites(int no1, int no2){
  // if (no1 % 2 == 0 & no2 % 2 == 1)
  // {
  //   return true;
  // }
  // else if (no1 % 2 == 1 & no2 % 2 == 0)
  // {
  //   return true;
  // }
  
  // return false;
  
  return no1 % 2 != no2 % 2 ? true : false;
}

int main(){
  
  cout << opposites(1, 2) << "\n";
  cout << opposites(4, 7) << "\n";
  cout << opposites(2, 2) << "\n";
  cout << opposites(1, 1) << "\n";
  
  return 0;
}