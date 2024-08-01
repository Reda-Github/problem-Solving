#include <iostream>
using namespace std;

float mangoe(int Qwantity, float price){

return (Qwantity -= (Qwantity / 3)) * price;
}

int main(){
  cout << mangoe(10, 2) << "\n";
  cout << mangoe(5, 2) << "\n";
  cout << mangoe(20, 2) << "\n";
  cout << mangoe(9, 2) << "\n";
  return 0;
}