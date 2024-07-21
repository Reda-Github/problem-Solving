#include <iostream>
using namespace std;
string setName(){
  string n;
  cout << "Please, Enter your name: ";
  cin >> n;
  return n;
}
void printName(){
  cout << setName() << "\n";
}


int main(){

  printName();

  return 0;
}