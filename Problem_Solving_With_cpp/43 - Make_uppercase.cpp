#include <iostream>
using namespace std;

/*
Write a function which converts the input string to uppercase.
*/

string make_uppercase(string str){
  string re = "";
  
  for (int i = 0; i < str.length(); i++)
  {
    re += toupper(str[i]);
  }
  return re;
}

int main(){
  
  cout << make_uppercase("reda") << "\n";
  
  return 0;
}