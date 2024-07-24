#include <iostream>
using namespace std;

bool is_even(int n)
{
  return n % 2 == 0 ? true : false;
}

int main(){
  
  cout << is_even(2) << "\n";
  cout << is_even(1) << "\n";
  
  return 0;
}