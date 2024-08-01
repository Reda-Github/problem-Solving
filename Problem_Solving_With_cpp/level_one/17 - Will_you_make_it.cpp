#include <iostream>
using namespace std;

bool check(int galoon, int location){
  int x = 25;
  if ((x * galoon) >= location)
  {
    return true;
  }
  else 
  {
    return false;
  }
}

int main(){
  
  // int mil = 1;
  // int g = 25 ;
  // int l = 170;
  // if ((8 * g) >= l){
  //   cout << true;
  // }
  // else {
  //   cout << false;
  // }
  
  cout << check(3, 67);
  cout << check(3, 77);
  
  return 0;
}