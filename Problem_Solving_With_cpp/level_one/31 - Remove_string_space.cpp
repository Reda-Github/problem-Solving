#include <iostream>
using namespace std;

string str(string s){
  string result = "";
  
  for(int i = 0; i < s.length(); i++){
    if (s[i] != ' '){
      result += s[i];
    }
  }
  
  return result;
}

int main(){
  
  cout << str("re reda");
  
  return 0;
}