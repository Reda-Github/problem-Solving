#include <iostream>
using namespace std;


int floor(int s){
  if (s <= 0)
    return s;
  else if (s < 13)
    return s - 1;
  else 
    return s - 2;
}

int main(){
  
  cout << floor(-3) << "\n";
  cout << floor(12) << "\n";
  cout << floor(15) << "\n";
  
  return 0;
}