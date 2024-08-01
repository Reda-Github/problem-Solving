#include <iostream>
using namespace std;

bool checkStrUppercase(string str){
  
  for (int i = 0; i < str.length(); i++)
    if (iswlower(str[i]))
      return 0;

  return 1;
}

int main(){
  
  cout << checkStrUppercase("REdA") << "\n";
  cout << checkStrUppercase("REDA") << "\n";
  
  return 0;
}