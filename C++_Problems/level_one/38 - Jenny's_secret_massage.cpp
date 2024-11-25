#include <iostream>
using namespace std;

string say_hello(string name){

  return name != "Jouny" ? "Helllo " + name : "Hello my love " + name;
}

int main(){

  cout << say_hello("Ahmed") << "\n";
  cout << say_hello("Jouny") << "\n";

  return 0;
}