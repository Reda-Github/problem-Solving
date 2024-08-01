#include <iostream>
#include <vector>
using namespace std;

void swap(int x, int y){
  int z = x;
  x = y;
  y = z;
  cout << x << " " << y << "\n";
}

int main(){
  
  swap(10, 5);
  
  return 0;
}