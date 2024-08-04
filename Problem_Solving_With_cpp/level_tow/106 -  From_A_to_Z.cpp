/*
Given a string indicating a range of letters, return a string which includes all the letters in that range, including the last letter.
Note that if the range is given in capital letters, return the string in capitals also!
*/

#include <string>
using namespace std;

string gimme_the_letters(string sp)
{
  char start = sp[0], end = sp[2];
  string result = "";
  
  for (int i = start; i <= end; i++) result += i;

  return result;
}
