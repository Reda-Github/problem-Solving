#include <iostream>
using namespace std;

string switch_it_up(int num){
  switch (num)
  {
  case 0: return "Zero";
  case 1: return "One";
  case 2: return "Tow";
  case 3: return "Three";
  case 4: return "Four";
  case 5: return "Five";
  case 6: return "Six";
  case 7: return "Seven";
  case 8: return "Eight";
  case 9: return "Nine";
  default: return "Error";
    break;
  }
}

int main(){
  
  cout << switch_it_up(2) << "\n";
  cout << switch_it_up(5) << "\n";
  cout << switch_it_up(9) << "\n";
  
  return 0;
}