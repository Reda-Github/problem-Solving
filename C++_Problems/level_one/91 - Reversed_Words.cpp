/*
Complete the solution so that it reverses all of the words within the string passed in.

Words are separated by exactly one space and there are no leading or trailing spaces.
*/


#include <iostream>
#include <string>
#include <vector>
using namespace std;

string reverse_words(string str) {
  string result = "";
  string container = "";
  
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == ' ')
    {
      result = container + " " + result;
      container = "";
    }
    else 
    {
      container += str[i];
    }
  }
  
  result = container + " " + result;
  result.pop_back();
  return result;
}



//  world! hello


int main(){
  
  cout << reverse_words("hello world!") << "\n";
  
  return 0;
}