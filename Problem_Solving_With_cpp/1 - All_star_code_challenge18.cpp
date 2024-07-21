#include <iostream>
using namespace std;

int charCount(string str, char charcter, bool print = true){
  string result;
  int count = 0;
  
  for (int i = 0; i < str.length(); i ++){
    if (str[i] == charcter){
      count ++;
      result += str[i];
    }
  }
    if (print == true){
      cout << result << "\n";
    }
  
  return count;
}

int main(){
  
  cout << charCount("RedaREdaReddarRR", 'R', false);
  
  return 0;
}