/*
Create a function that takes 2 integers in form of a string as an input, and outputs the sum (also as a string):
*/

#include <iostream>
#include <string>
using namespace std;


string sum_str(string a, string b) {

  return to_string(stoi(a == "" ? "0" : a) + stoi(b == "" ? "0" : b));
}

int main(){
  
  cout << sum_str("5", "5") << "\n";
  cout << sum_str("5", "0") << "\n";
  cout << sum_str("0", "5") << "\n";
  cout << sum_str("0", "0") << "\n";
  
  return 0;
}