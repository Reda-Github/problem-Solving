#include <iostream>
using namespace std;


string rm(string str){
  string result;
  for (int i = 1; i < str.length()-1; i++){
      result += str[i];
  }
  return result;
}


int main()
{
  cout << rm("rRedar");
  return 0;
}