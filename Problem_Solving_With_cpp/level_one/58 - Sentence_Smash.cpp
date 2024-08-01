#include <vector>
#include <string>
using namespace std;
string smash(vector<string> words)
{
  string result = "";
  for (int i = 0; i < words.size(); i++)
  {
    
    if (result == "") result += words[i];
    else result += ' ' + words[i];
    
  }
  return result;
}