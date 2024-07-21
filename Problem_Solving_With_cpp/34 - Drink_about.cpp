#include <iostream>
using namespace std;

string drink_type(int no){
  if (no < 14)
    return "milk";
  if (no < 18)
    return "cola";
  if (no < 21)
    return "orange jouse";
  return "bear";
}

int main(){
  
  cout << drink_type(15) << "\n";
  
  return 0;
}