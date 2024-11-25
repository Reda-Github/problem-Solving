// Write a function to split a string and convert it into an array of words.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> string_to_array(string s) {
  vector<string> result;
  string str = "";
  
  for (auto i : s)
  {
    if (i != ' '){
    str += i;
    }
    else {
    result.push_back(str);
    str = "";
    }
  }
  result.push_back(str);
  return result;
}


int main(){
  
  return 0;
}