/*
Write a function that checks if a given string (case insensitive) is a palindrome.

A palindrome is a word, number, phrase, or other sequence of symbols that reads the same backwards as forwards, such as madam or racecar
*/

#include <string>
using namespace std;

bool isPalindrom (string str)
{
  for (int i = 0; i < str.length(); i++)
  {
    if (tolower(str[i]) != tolower(str[str.length() - 1 - i]))
      return false;
  }
  
  return true;
}