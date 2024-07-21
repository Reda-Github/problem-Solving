#include <iostream>
using namespace std;

int check(int boletus, int dragon){
  return boletus >= dragon * 2 ? true : false;
}

int main(){
  
  cout << check(10, 5) << "\n";
  cout << check(10, 2) << "\n";
  cout << check(10, 7) << "\n";
  
  return 0;
}