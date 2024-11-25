#include <iostream>
#include <string>
using namespace std;


std::string fakeBin(std::string str){
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] < int('5'))
    {
      str[i] = '0';
    }
    else 
    {
      str[i] = '1';
    }
  }
  return str;
}

int main(){
  
  cout << fakeBin("29447124") << "\n";
  
  return 0;
}