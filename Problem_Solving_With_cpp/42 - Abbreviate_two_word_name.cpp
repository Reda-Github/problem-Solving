#include <iostream>
using namespace std;

#include <string>

std::string abbrevName(std::string name)
{
  std::string result = "";
  
    result += toupper(name[0]);
  for (int i = 0; i < name.length(); i++)
  {
    if (name[i] == ' ')
    {
      result += '.';
      result += toupper(name[i + 1]);
    }
  }
  return result;
}

int main(){
  
  cout << abbrevName("reda jaber abdo") << "\n";
  
  return 0;
}