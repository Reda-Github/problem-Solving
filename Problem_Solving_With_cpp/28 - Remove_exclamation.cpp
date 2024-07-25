/*
Write function RemoveExclamationMarks which removes all exclamation marks from a given string.
*/

#include <string>
using namespace std;
string removeExclamationMarks(string str){
  string result = "";
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] != '!') result += str[i];
    else continue;
  }
  return result;
}