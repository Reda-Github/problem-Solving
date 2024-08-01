#include <iostream>
#include <string>
using namespace std;
int get_age(string she_said) {
  int year;
  string s;
  s = she_said.front();
  year = stoi(s);
  
  return year;
}

int main()
{
  cout << get_age("3 year old");
  return 0;
}