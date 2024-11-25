#include <iostream>
using namespace std;

string switchStr(string str){
  string result;
  
  for (int i = 0; i < str.length(); i++){
    if (isupper(str[i]))
    {
      result += tolower(str[i]);
    }
    else 
    {
      result += toupper(str[i]);
    }
  }
  
  return result;
}

int main(){
  
  cout << switchStr("rEDA");
  
  return 0;
}