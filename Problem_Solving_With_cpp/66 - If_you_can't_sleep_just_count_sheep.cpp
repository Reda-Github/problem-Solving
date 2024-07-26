#include <string>
using namespace std;
string countSheep(int number) {
  
  string result = "";
  for (int i = 0; i < number; i++) result += to_string(i + 1) + " sheep...";

  return result;
}