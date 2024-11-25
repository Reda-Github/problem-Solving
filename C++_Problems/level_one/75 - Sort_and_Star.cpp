/*
You will be given a list of strings. You must sort it alphabetically (case-sensitive, and based on the ASCII values of the chars) and then return the first value.

The returned value must be a string, and have "***" between each of its letters.

You should not remove or add elements from/to the array
*/

#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string twoSort(vector<string> s)
{
  sort(s.begin(), s.end());
  
  string str = s.at(0);
  string result = "";
  
  for (int i = 0; i < str.length(); i++){
    result += str[i];
    if (i != str.length() - 1) result += "***";
  }
  
  return result;
}