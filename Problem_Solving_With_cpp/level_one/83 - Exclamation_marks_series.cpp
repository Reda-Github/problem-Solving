// Replace all vowel to exclamation mark in the sentence. aeiouAEIOU is vowel.

#include <string>
using namespace std;

string replace(string s)
{
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||  s[i] == 'U' ||  s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
      s[i] = '!';
    }
  }
  return s;
}