#include <iostream>
using namespace std;

string correct(string str){
  
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == '0')
    {
      str[i] = 'O';
    }
    if (str[i] == '1')
    {
      str[i] = 'I';
    }
    if (str[i] == '5')
    {
      str[i] = 'S';
    }
  }
  
  return str;
}

int main(){

  cout << correct("Reda5kl0ls1") << "\n";

  return 0;
}