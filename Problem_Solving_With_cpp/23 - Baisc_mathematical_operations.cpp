#include <iostream>
using namespace std;

float baiscOpr(float no1, float no2, char opr){

  if (opr == '+')
    return no1 + no2;
  else if (opr == '*')
    return no1 * no2;
  else if (opr == '-')
    return no1 - no2;
  else if (opr == '/')
    return no1 / no2;
  else 
    return 0;
}

int main(){
  
  cout << baiscOpr(12.0, 12.0, '+');
  
  return 0;
}