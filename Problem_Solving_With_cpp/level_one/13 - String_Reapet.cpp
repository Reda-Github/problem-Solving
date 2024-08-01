#include <iostream>
using namespace std;

string strReapet(string str, int count){
  string result;
  for (int i = 0; i < count ; i++){
    result += str;
  }
  return result;
}

int main(){
  cout << strReapet("Reda", 5);
  return 0;
}