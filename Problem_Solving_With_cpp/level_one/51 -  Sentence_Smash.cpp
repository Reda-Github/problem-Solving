#include <iostream>
using namespace std;

#include <vector>
#include <string>

std::string smash(const std::vector<std::string>& words)
{
  std::string result = "";
  
  for (int i = 0; i< words.size(); i++)
  {
    if (i > 0)
      result += ' ';
    
    result += words[i];
  }
  return result;
}

int main(){
  
  cout << smash({"hello", "world", "this", "is", "great"}) << "\n";
  
  return 0;
}