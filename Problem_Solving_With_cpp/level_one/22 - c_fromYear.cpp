#include <iostream>
using namespace std;

int year(int y){
  if (y < 4)
    return 1;
  else if (y < 7)
    return 2;
  else if (y < 10)
    return 3;
  else 
    return 4;
}
void printYear(){
  int i;
  cout << "Please, Enter num: ";
  cin >> i;
  cout << year(i);
}

int main(){
  printYear();
  
  return 0;
}